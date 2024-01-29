# Open Deck Software

## Parts and fully assembled units can be purchased Here: https://www.tindie.com/products/27756/  
<br>


# Software:
## Uploading Images
The PC application makes it super easy to upload images. The files can be any size and the program does all of the conversion for you. At the moment each image can only be a single colour when uploaded through the GUI. When uploading an image the black part of the image will be shown in the chosen colour and the rest will be black. See Additional Features section for how to do images with multiple colours.

## Arduino
All of the code running on the ESP8266 on the Open Deck itself is using arduino. The images are stored as a bitmap in SPIFFS so that they remain after a power cycle and are not relient on a computer connection.

When a key is pressed it sends a correlated number (1-16) over serial to the program running on the computer. 

#MQTT
Thanks to the WiFi enable esp8266 chip the Open Deck can also be used as a smart home controller using MQTT. This can easily interface with home assitant without the Open-Deck only needing to be plugged in for power. Upload the example MQTT arduino sketch onto the Open Deck and enter your credentials in the code. 

A number 1-16 will be sent to the topic ```open_deck/buttons``` whenever the button is pressed.

Images can easily be uploaded using the GUI and will be saved localy on the Open Deck.

In the future I would like to integrate this setup into the GUI so you do not need to re-flash any firmware.

# Additional Features:
If you want images with multiple colours these currently need to be manually entered into the arduino code. The bitmap in the correct format will be outputted when an image is uploaded using the source python file "full_gui.py". One image will needed to be made for each colour in the image. A pre-made example of this can be uncommented for a chrome logo. Final imges are 48x72 pixels stored as a bitmap. The last 3 bytes of the message sent over serial contain the RGB colour of the icon.

Replace:

        tft.drawBitmap(0,0,homes[1], 54, 70, homeColours[1]);  //comment out this line to use chrome mulit-colour example

With:

        /////////    Chrome Multi-colour example  ///////
          tft.drawBitmap(0,0,chrome_r, 54, 70, ST77XX_RED);   
          tft.drawBitmap(0,0,chrome_g, 54, 70, ST77XX_GREEN);
          tft.drawBitmap(0,0,chrome_b, 54, 70, ST77XX_BLUE);
          tft.drawBitmap(0,0,chrome_y, 54, 70, ST77XX_YELLOW);

Where chrome_r, chrome_g etc. are individual bitmaps of each coloured reigon stored in the bitmaps.h file. The colour of each bitmap can then manually be set (eg. ST77XX_RED, (RGR565 format)) 

Note:  When uploading one of the macro images two images will be printed. The second is a smaller version used for the key press effect.
        
<br>
<br>

# Notes:
- Feel free to reach out with any question/problems and I will try to help
- The sofware is still evolving and I am by no means a software engineer but I have been using it everyday for over 6 months without an major issues.

