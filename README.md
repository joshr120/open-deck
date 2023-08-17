# TODO:
## - Make Video
## - Tidy smaller code
## -
## -

# Open Deck
![Open Deck Image](images/Image 1.jpg)
Open Deck is a low cost open source macro keyboard with a customizable image behind every key.

Open Deck is an open source macro keyboard designed to be a cheaper alternative to the stream deck. It has software to easily change the images as well as the macros assigned to each button. The folder Structure allows 6 different apps to be configured with 3 macro keys each. The software allows the open deck to update with whatever app is open as well as open an app when buttons are pressed.

An easy to use interface allows you to easily upload and set macros.

Full Video and build guide here:

# Software:
# **GUI Interface (.exe)**
![GUI Image](images/gui.jpg)

Provided is a compiled .exe program as well as all the source code (written in python)

Note: the automatic window switching only works on windows currently

written in python and uses the customtkinter interface for displaying the gui

# Uploading Images
Final imges are 48x72? pixels stored as a bitmap. The files can be any size and the program does all of the conversion for you. At the moment each image can only be a single colour when uploaded through the GUI. When uploading an image the black part of the image will be shown in the chosen colour and the rest will be black. See Additional Features section for how to do images with multiple colours.

The select & upload button will prompt the user to select an image from the file system as well as choose a colour from a colour picker.

the last 3 bytes od the message sent over serial contain the RGB colour of the icon.

# Setting Macros
The macros are sent using the python keyboard library.

If more complex macros are required I recommend setting it to some unused combination and then remapping this combination using something like auto hot key. (Not going to try re-invent the wheel here)

# Window Switching/application setup
One usefull feature on the open deck has is the ability to have the buttons change depending on which application is currently open as well. It can also open an app when a button on the open deck is pressed.

By inputting the application name for each menu of the open deck, the program will look for a window containing this name to either control the open deck or have the open deck control/activate this window.

On windows there are 3 settings for automatically switching windows and/or current open deck state.

The first option is to enable......


# Arduino
Esp8266 all images stored in spiffs.

When a key is pressed it send it correlated number (1-16) over serial to the program running on the computer. 

# Hardware
The display is a 128x160 tft display. The exact display is quite important as the hole patten and pinout needs to fit the custom PCB's.

Acrylic windows glued together with UV adhesive allows you to see through the buttons to the display underneath. The bottom sheet is 2mm while the top protruding piece is 3mm. This could also be machnined out of a single 5mm piece or even SLA 3D printed and polished with clear resin.

An ESP8266 is being used as the micro-controller as it is small, low cost, has enough flash memory to store all of the images as well as having WiFi to allow for additional features.

## 3D Printed Parts
All parts can be printed with no supports

Main body...

Bottom cover....

Window Holder ....

Spacer ....


## PCB's


# Additional Features:
Another use case for the open deck is to control smart home deviced. The ESP8266 is a common wifi chip and could be setup for automations without needing to be connected to a host computer. 

Currently no example code for this but simply change the serial write commands in the arduino program to send a comand with your favourite service such as MQTT with home assistant. Images can then still be uploaded with the GUI interface and are stored locally on the device so will remain even after a power cycle.

If you want images with multiple colours these currently need to be manually entered into the arduino code. The python file called image uploader simple will output the correct bitmap which can be used in the arduino code. One image will needed to be made for each colour in the image. A pre made example of this can be uncommented for a chrome logo.