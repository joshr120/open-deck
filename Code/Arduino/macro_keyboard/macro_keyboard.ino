
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#include <FS.h> //for saving in spiffs

#include "bitmap.h"
#include "home_bitmaps.h"
#include "menu_bitmaps.h"

#define TFT_CS     D8  //use hardware somehow?????? (D8) works with (D1)
#define TFT_RST    D6  // you can also connect this to the Arduino reset
                       // in which case, set this #define pin to -1!
#define TFT_DC     D2



////////////////////////////
//   PCB SMALL BUTTONS    //
////////////////////////////
#define TL D0
#define BL A0 //D4!!!!!!!!!!
#define TR D1
#define BR D4


// For 1.44" and 1.8" TFT with ST7735 use
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

int pageState = 1;
int lastPageState = 0;

int menuState = 0;
int lastMenuState = 0;

int incomingByte = 0;

#define BUFF_LEN 490
unsigned char img1 [BUFF_LEN];
unsigned char colour [3];

uint16_t homeColours [] = {0, 0xF800, 0x07E0, 0xF8FF, 0xF800, 0xF8FF, 0x07FF};
uint16_t menuColours [] = {0, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0xF800};

unsigned char writeBuffer [492]; //array to store in spiffs 490 bits of the image and 2 bit on the end of the colour

void setup(void) {
  pinMode(TL, INPUT);
  pinMode(TR, INPUT_PULLUP);
  pinMode(BL, INPUT);
  pinMode(BR, INPUT_PULLUP);
  Serial.begin(115200);
  Serial.setTimeout(500);
  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  tft.fillScreen(ST77XX_BLACK);

  //Serial.println("Initialized");

  delay(100);

  tft.setRotation(2);  //invert diaply orientation

  readFromSpiffs();

}

void loop() {

    bool TLState = digitalRead(TL);
    bool BRState = digitalRead(BR);
    bool TRState = digitalRead(TR);  //BL always triggers on serial opening (OLD??)
    int BLVal = analogRead(BL);

    bool BLState = (BLVal>500);

    //page 1
    if (pageState == 1 && !TLState){  //top left page 1
      //Serial.println("Entering Chrome Menu");
      menuState = 1;
      pageState = 0;
      lastPageState = 0;
    } else if (pageState == 1 && !TRState){ //top Right page 1
      menuState = 2;
      pageState = 0;
      lastPageState = 0;
    } else if (pageState == 1 && !BLState){  //Bottom left page 1
      menuState = 3;
      pageState = 0;
      lastPageState = 0;
    } else if (pageState == 1 && !BRState){  //next page pressed page 1
      pageState = 2;
    } else if ((pageState == 0 && menuState <= 3) && !BLState){  //home pressed from menu 1-3
      pageState = 1;
      menuState = 0;
      lastMenuState = 0;
    }
    
    //page 2
    else if (pageState == 2 && !TLState){  //top left page 2
      menuState = 4;
      pageState = 0;
      lastPageState = 0;
    } else if (pageState == 2 && !TRState){ //top Right page 2
      menuState = 5;
      pageState = 0;
      lastPageState = 0;
    } else if (pageState == 2 && !BLState){  //prev page
      pageState = 1;
    } else if (pageState == 2 && !BRState){  //bottom right page 2
      menuState = 6;
      pageState = 0;
      lastPageState = 0;
    } else if ((pageState == 0 && menuState >= 4) && !BLState){  //home pressed from menu 4-6
      pageState = 2;
      menuState = 0;
      lastMenuState = 0;
    }

    //Menu 1        
    else if (menuState == 1 && !TLState){
      tft.fillRect(0,0,54, 70, ST77XX_BLACK);
      tft.drawBitmap(0,0,menus_small[1], 54, 70, menuColours[1]);
      Serial.println("1");
      delay(150);
      while(!TLState){ TLState = digitalRead(TL);delay(10);}
      tft.drawBitmap(0,0,menus[1], 54, 70, menuColours[1], ST77XX_BLACK);
      
    } else if (menuState == 1 && !TRState){
      tft.fillRect(74, 0, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74,0,menus_small[2], 54, 70, menuColours[2]);
      Serial.println("2");
      delay(150);
      while(!TRState){ TRState = digitalRead(TR);delay(10);}
      tft.drawBitmap(74,0,menus[2], 54, 70, menuColours[2], ST77XX_BLACK);
      
    } else if (menuState == 1 && !BRState){
      tft.fillRect(74, 90, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74, 90, menus_small[3], 54, 70, menuColours[3]);
      Serial.println("3");
      delay(150);
      while(!BRState){ BRState = digitalRead(BR);delay(10);}
      tft.drawBitmap(74,90,menus[3], 54, 70, menuColours[3], ST77XX_BLACK);
    }

    //Menu 2
    else if (menuState == 2 && !TLState){
      tft.fillRect(0,0,54, 70, ST77XX_BLACK);
      tft.drawBitmap(0,0,menus_small[4], 54, 70, menuColours[4], ST77XX_BLACK);
      Serial.println("4");
      delay(150);
      while(!TLState){ TLState = digitalRead(TL);delay(10);}
      tft.drawBitmap(0,0,menus[4], 54, 70, menuColours[4], ST77XX_BLACK);
      
    } else if (menuState == 2 && !TRState){
      tft.fillRect(74, 0, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74,0,menus_small[5], 54, 70, menuColours[5]);
      Serial.println("5");
      delay(150);
      while(!TRState){ TRState = digitalRead(TR);delay(10);}
      tft.drawBitmap(74,0,menus[5], 54, 70, menuColours[5], ST77XX_BLACK);
      
    } else if (menuState == 2 && !BRState){
      tft.fillRect(74, 90, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74, 90, menus_small[6], 54, 70, menuColours[6]);
      Serial.println("6");
      delay(150);
      while(!BRState){ BRState = digitalRead(BR);delay(10);}
      tft.drawBitmap(74,90,menus[6], 54, 70, menuColours[6], ST77XX_BLACK);
    }

    //Menu 3
    else if (menuState == 3 && !TLState){
      tft.fillRect(0,0,54, 70, ST77XX_BLACK);
      tft.drawBitmap(0,0,menus_small[7], 54, 70, menuColours[7]);
      Serial.println("7");
      delay(150);
      while(!TLState){ TLState = digitalRead(TL);delay(10);}
      tft.drawBitmap(0,0,menus[7], 54, 70, menuColours[7], ST77XX_BLACK);
      
    } else if (menuState == 3 && !TRState){
      tft.fillRect(74, 0, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74,0,menus_small[8], 54, 70, menuColours[8]);
      Serial.println("8");
      delay(150);
      while(!TRState){ TRState = digitalRead(TR);delay(10);}
      tft.drawBitmap(74,0,menus[8], 54, 70, menuColours[8], ST77XX_BLACK);
      
    } else if (menuState == 3 && !BRState){
      tft.fillRect(74, 90, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74, 90, menus_small[9], 54, 70, menuColours[9]);
      Serial.println("9");
      delay(150);
      while(!BRState){ BRState = digitalRead(BR);delay(10);}
      tft.drawBitmap(74,90,menus[9], 54, 70, menuColours[9], ST77XX_BLACK);
    }

    //Menu 4 (task manger)
    else if (menuState == 4 && !TLState){
      tft.fillRect(0,0,54, 70, ST77XX_BLACK);
      tft.drawBitmap(0,0,menus_small[10], 54, 70, menuColours[10]);
      Serial.println("10");
      delay(150);
      while(!TLState){ TLState = digitalRead(TL);delay(10);}
      tft.drawBitmap(0,0,menus[10], 54, 70, menuColours[10], ST77XX_BLACK);
      
    } else if (menuState == 4 && !TRState){
      tft.fillRect(74, 0, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74,0,menus_small[11], 54, 70, menuColours[11]);
      Serial.println("11");
      delay(150);
      while(!TRState){ TRState = digitalRead(TR);delay(10);}
      tft.drawBitmap(74,0,menus[11], 54, 70, menuColours[11], ST77XX_BLACK);
      
    } else if (menuState == 4 && !BRState){
      tft.fillRect(74, 90, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74, 90, menus_small[12], 54, 70, menuColours[12]);
      Serial.println("12");
      delay(150);
      while(!BRState){ BRState = digitalRead(BR);delay(10);}
      tft.drawBitmap(74,90,menus[12], 54, 70, menuColours[12], ST77XX_BLACK);
    }

    //Menu 5
    else if (menuState == 5 && !TLState){
      tft.fillRect(0,0,54, 70, ST77XX_BLACK);
      tft.drawBitmap(0,0,menus_small[13], 54, 70, menuColours[13]);
      Serial.println("13");
      delay(150);
      while(!TLState){ TLState = digitalRead(TL);delay(10);}  //disabled to allow hold down volume
      tft.drawBitmap(0,0,menus[13], 54, 70, menuColours[13], ST77XX_BLACK);
      //delay(100);
      
    } else if (menuState == 5 && !TRState){
      tft.fillRect(74, 0, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74,0,menus_small[14], 54, 70, menuColours[14]);
      Serial.println("14");
      delay(150);
      while(!TRState){ TRState = digitalRead(TR);delay(10);}  //disabled to allow hold down volume
      tft.drawBitmap(74,0,menus[14], 54, 70, menuColours[14], ST77XX_BLACK);
      //delay(100);
      
    } else if (menuState == 5 && !BRState){
      tft.fillRect(74, 90, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74, 90, menus_small[15], 54, 70, menuColours[15]);
      Serial.println("15");
      delay(150);
      while(!BRState){ BRState = digitalRead(BR);delay(10);}
      tft.drawBitmap(74,90,menus[15], 54, 70, menuColours[15], ST77XX_BLACK);
    }
    
    //Menu 6
    else if (menuState == 6 && !TLState){
      tft.fillRect(0,0,54, 70, ST77XX_BLACK);
      tft.drawBitmap(0,0,menus_small[16], 54, 70, menuColours[16]);
      Serial.println("16");
      delay(150);
      while(!TLState){ TLState = digitalRead(TL);delay(10);}
      tft.drawBitmap(0,0,menus[16], 54, 70, menuColours[16], ST77XX_BLACK);
      
    } else if (menuState == 6 && !TRState){
      tft.fillRect(74, 0, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74,0,menus_small[17], 54, 70, menuColours[17]);
      Serial.println("17");
      delay(150);
      while(!TRState){ TRState = digitalRead(TR);delay(10);}
      tft.drawBitmap(74,0,menus[17], 54, 70, menuColours[17], ST77XX_BLACK);
      
    } else if (menuState == 6 && !BRState){
      tft.fillRect(74, 90, 54, 70, ST77XX_BLACK);
      tft.drawBitmap(74, 90, menus_small[18], 54, 70, menuColours[18]);
      Serial.println("18");
      delay(150);
      while(!BRState){ BRState = digitalRead(BR);delay(10);}
      tft.drawBitmap(74,90,menus[18], 54, 70, menuColours[18], ST77XX_BLACK);
    }
    
    screenUpdate();

    //received serial data so call function to read the imcomming data and save it to spiffs
    if (Serial.available() > 0) {
      imageImport();  //received serial 
      //force refresh because of weird behav of "button press" when serial receive (May be fixed?)
      //pageState = 1;
      //lastPageState = 0;
    }

    
    //delay(20);
}

void screenUpdate() {

  ///update one of the home screens
  if (pageState != lastPageState && (pageState > 0)){  
    tft.fillScreen(ST77XX_BLACK);
    lastPageState = pageState;
    if (pageState == 1){

      /////////    Chrome Multi-colour example  ///////
//      tft.drawBitmap(0,0,chrome_r, 54, 70, ST77XX_RED);   
//      tft.drawBitmap(0,0,chrome_g, 54, 70, ST77XX_GREEN);
//      tft.drawBitmap(0,0,chrome_b, 54, 70, ST77XX_BLUE);
//      tft.drawBitmap(0,0,chrome_y, 54, 70, ST77XX_YELLOW);
      /////////              END              //////////

      tft.drawBitmap(0,0,homes[1], 54, 70, homeColours[1]);  //comment out this line to use chrome mulit-colour example
      tft.drawBitmap(74,0,homes[2], 54, 70, homeColours[2]);
      tft.drawBitmap(0,90,homes[3], 54, 70, homeColours[3]);
      
      tft.drawBitmap(74,90,nextPage, 54, 70, ST77XX_WHITE);
      
    } else if (pageState == 2){
      tft.drawBitmap(0,0,homes[4], 54, 70, homeColours[4]);
      tft.drawBitmap(74,0,homes[5], 54, 70, homeColours[5]);
      tft.drawBitmap(74,90,homes[6], 54, 90, homeColours[6]);

      tft.drawBitmap(0,90,prevPage, 54, 70, ST77XX_WHITE);
    }
    delay(150);
  } 
  
  //update home of the menus
  else if (menuState != lastMenuState){
    lastMenuState = menuState;
    tft.fillScreen(ST77XX_BLACK);
    tft.drawBitmap(0,90,homeIcon, 54, 70, ST77XX_WHITE);
    if (menuState == 1){  //Folder 1
      Serial.println("Menu: 1");
      tft.drawBitmap(0,0,menus[1], 54, 70, menuColours[1]);
      tft.drawBitmap(74,0,menus[2], 54, 70, menuColours[2]);
      tft.drawBitmap(74,90,menus[3], 54, 70, menuColours[3]);
    } else if (menuState == 2){ //Folder 2
      Serial.println("Menu: 2");
      tft.drawBitmap(0,0,menus[4], 54, 70, menuColours[4]);
      tft.drawBitmap(74,0,menus[5], 54, 70, menuColours[5]);
      tft.drawBitmap(74,90,menus[6], 54, 70, menuColours[6]);
    } else if (menuState == 3){ //Folder 3
      Serial.println("Menu: 3");
      tft.drawBitmap(0,0,menus[7], 54, 70, menuColours[7]);
      tft.drawBitmap(74,0,menus[8], 54, 70, menuColours[8]);
      tft.drawBitmap(74,90,menus[9], 54, 70, menuColours[9]);
    } else if (menuState == 4){ //Folder 4
      Serial.println("Menu: 4");
      tft.drawBitmap(0,0,menus[10], 54, 70, menuColours[10]);
      tft.drawBitmap(74,0,menus[11], 54, 70, menuColours[11]);
      tft.drawBitmap(74,90,menus[12], 54, 70, menuColours[12]);
    } else if (menuState == 5){ //Folder 5
      Serial.println("Menu: 5");
      tft.drawBitmap(0,0,menus[13], 54, 70, menuColours[13]);
      tft.drawBitmap(74,0,menus[14], 54, 70, menuColours[14]);
      tft.drawBitmap(74,90,menus[15], 54, 70, menuColours[15]);
    } else if (menuState == 6){  //Folder 6
      Serial.println("Menu: 6");
      tft.drawBitmap(0,0,menus[16], 54, 70, menuColours[16]);
      tft.drawBitmap(74,0,menus[17], 54, 70, menuColours[17]);
      tft.drawBitmap(74,90,menus[18], 54, 70, menuColours[18]);
    }
    delay(150);
  }
}
  
word ConvertRGB( byte R, byte G, byte B)
{
  return ( ((R & 0xF8) << 8) | ((G & 0xFC) << 3) | (B >> 3) );
}


///////////////////////////////////////////////////////
/////////////// Image Serial Import ///////////////////
///////////////////////////////////////////////////////
void imageImport(){
  // read the incoming data
  String image = Serial.readStringUntil('\n');

  if(image.substring(0, 5) == "GoTo:"){   //if GoTo: received python script is indicating current screen should be changed  
    menuState = image.substring(6).toInt();
    pageState = 0;
    lastPageState = 0;
  }
  
  
  if(image.substring(0, 4) == "home"){  //check to see if first 4 letter of string are home
    int imgNumber = image.substring(5).toInt();  //get the number off the end of the image to update
    Serial.println(image);
    Serial.readBytes(homes[imgNumber], BUFF_LEN);  //read first 490 bytes into img array
    Serial.readBytes(colour, 3);  //read next 3 bytes into colour array to be converted on next line
    homeColours[imgNumber] = ConvertRGB(colour[0], colour[1], colour[2]);
    //save in SPIFFS file
    String filename = "/"+image+".bin";
    File writeFile = SPIFFS.open(filename, "w");
    //add colour onto end of img
    unsigned char colourBytes [] = {highByte(homeColours[imgNumber]), lowByte(homeColours[imgNumber])};
    memcpy(writeBuffer, homes[imgNumber], sizeof(homes[imgNumber]));
    memcpy(&writeBuffer[sizeof(homes[imgNumber])], colourBytes, sizeof(colourBytes));
    //write the new buffer to the file
    if (writeFile) {
      int numBytes = writeFile.write(writeBuffer, BUFF_LEN+2);
//      Serial.print(numBytes);
//      Serial.println(" Bytes Written");
    }
    writeFile.close();
    //force refresh with new icon
    pageState = 1;
    if (imgNumber > 3){pageState = 2;}  //if item on second page refresh that
    lastPageState = 0;
  }

  //import normal menu item (not small ones)
  else if(image.substring(0, 4) == "menu"  &&  image.lastIndexOf("s") == -1){  //check to see if first 4 letter of string are menu (and make sure s isnt on the end)
    int imgNumber = image.substring(5).toInt();  //get the number off the end of the image to update
    Serial.println(image);
    Serial.readBytes(menus[imgNumber], BUFF_LEN);
    Serial.readBytes(colour, 6);
    menuColours[imgNumber] = ConvertRGB(colour[0], colour[1], colour[2]);
    //save in SPIFFS file
    String filename = "/"+image+".bin";
    File writeFile = SPIFFS.open(filename, "w");
    //add colour onto end of img
    unsigned char colourBytes [] = {highByte(menuColours[imgNumber]), lowByte(menuColours[imgNumber])};
    memcpy(writeBuffer, menus[imgNumber], sizeof(menus[imgNumber]));
    memcpy(&writeBuffer[sizeof(menus[imgNumber])], colourBytes, sizeof(colourBytes));
    //write the new buffer to the file
    if (writeFile) { 
      int numBytes = writeFile.write(writeBuffer, BUFF_LEN+2);
    }
    writeFile.close();   
  }

  //import "small" images for when menu item pressed
  else if(image.substring(0, 4) == "menu"  &&  image.lastIndexOf("s") != -1){  //menu and constains an s
    int imgNumber = image.substring(5,image.lastIndexOf("s")).toInt();  //get the number off the end of the image before s
    Serial.println(image);
    Serial.readBytes(menus_small[imgNumber], BUFF_LEN);
    //save in SPIFFS file
    String filename = "/"+image+".bin";
    File writeFile = SPIFFS.open(filename, "w");
    //write the new buffer to the file
    if (writeFile) {
      int numBytes = writeFile.write(menus_small[imgNumber], BUFF_LEN);
    }
    writeFile.close();   
    //force refresh with new icon
    pageState = 0;
    lastPageState = 0;
    if (imgNumber%3 == 0){
      menuState = int(imgNumber/3);
    } else {
      menuState = int(imgNumber/3)+1;
    }
    lastMenuState = 0;
  }

}



///////////////////////////////////////////////////////
/////////////// Image read from SPIFFS ////////////////
///////////////////////////////////////////////////////
void readFromSpiffs(){
  //first innit file structure (do once at start)
  bool success = SPIFFS.begin();
  if (success) {
    Serial.println("File system mounted with success");
  } else {
    Serial.println("Error mounting the file system");
    return;
  }

  //load home images
  for (int imgNum = 1; imgNum <= 6; imgNum++) {
     String filename = "/home_"+String(imgNum)+".bin";
     File readFile = SPIFFS.open(filename, "r");
     if (readFile) {
       unsigned char readBuffer [492];
       int readLen = readFile.size();
       readFile.readBytes((char*)readBuffer,readLen);  //could instead read first 490 bytes inot one array and other 2 into anouther
  //     Serial.print(readLen);
  //     Serial.println(" Bytes Read");
       if (readLen == 492){
        for (int i = 0; i<BUFF_LEN; i++){  //copy the img part of the array out
          homes[imgNum][i] = readBuffer[i];
        }
        homeColours[imgNum] = word(readBuffer[490], readBuffer[491]);  //convert the colour back into 16 bit and put into colour array
       }
     }
     readFile.close();
  }

  //load menu images
  for (int imgNum = 1; imgNum <= 18; imgNum++) {
     String filename = "/menu_"+String(imgNum)+".bin";
     File readFile = SPIFFS.open(filename, "r");
     if (readFile) {
       unsigned char readBuffer [492];
       int readLen = readFile.size();
       readFile.readBytes((char*)readBuffer,readLen);  //could instead read first 490 bytes inot one array and other 2 into anouther
       if (readLen == 492){
        for (int i = 0; i<BUFF_LEN; i++){  //copy the img part of the array out
          menus[imgNum][i] = readBuffer[i];
        }
        menuColours[imgNum] = word(readBuffer[490], readBuffer[491]);  //convert the colour back into 16 bit and put into colour array
       }
     }
     readFile.close();
     filename = "/menu_"+String(imgNum)+"s.bin";
     readFile = SPIFFS.open(filename, "r");  //read menu_s file (no colour at the end)
     if (readFile) {
       unsigned char readBuffer [BUFF_LEN];
       int readLen = readFile.size();
       readFile.readBytes((char*)menus_small[imgNum],readLen); //read straight into menu_s array
     }
     readFile.close();
  }
}
