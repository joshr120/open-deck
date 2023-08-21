# Open Deck Software

## Parts and fully assembled units can be purchased Here: https://www.tindie.com/products/27756/  
<br>


# Software:
The sofware is still evolving and I am by no means a software engineer but I have been using it everyday for over 6 months without an major issues.

## Note on compiling .py into .exe
The customtkinter GUI library used requires the directory to be manually included with the <code>--add-data</code> option of pyinstaller.

> See https://github.com/TomSchimansky/CustomTkinter/wiki/Packaging for more info

## Uploading Images
The PC application makes it super easy to upload images. The files can be any size and the program does all of the conversion for you. At the moment each image can only be a single colour when uploaded through the GUI. When uploading an image the black part of the image will be shown in the chosen colour and the rest will be black. See Additional Features section for how to do images with multiple colours.

## Arduino
All of the code running on the ESP8266 on the Open Deck itself is using arduino. The images are stored as a bitmap in SPIFFS so that they remain after a power cycle and are not relient on a computer connection.

When a key is pressed it sends a correlated number (1-16) over serial to the program running on the computer. 


# Additional Features:
Another use case for the open deck is to control smart home deviced. The ESP8266 is a common wifi chip and could be setup for automations without needing to be connected to a host computer. 

Currently no example code for this but simply change the serial write commands in the arduino program to send a comand with your favourite service such as MQTT. This can then be integrated with something such as home assistant. Images can still be uploaded with the GUI interface and are stored locally on the device so will remain even after a power cycle and when not connected to a computer.

If you want images with multiple colours these currently need to be manually entered into the arduino code. The python file called image uploader will output the correct bitmap which can be used in the arduino code. One image will needed to be made for each colour in the image. A pre-made example of this can be uncommented for a chrome logo. Final imges are 48x72 pixels stored as a bitmap. the last 3 bytes od the message sent over serial contain the RGB colour of the icon.

<br>
<br>

# TODO:
### - Code Tidy/Defaults
### - STEP Files of CNC Parts
### - Video of it in use