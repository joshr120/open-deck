# TODO:
### - Make Video
### - BOM
### - STEP Files of CNC Parts


# Open Deck

## Parts and fully assembled units can be purchased Here: https://www.tindie.com/products/27756/  
<br>



<img src="Images/Image_1.jpg" width="400">⠀⠀⠀⠀⠀⠀⠀<img src="Images/Image_2.jpg" width="400">

Open Deck is a low cost open source macro keyboard with a customizable image behind every key.

Open Deck is an open source macro keyboard designed to be a cheaper alternative to the stream deck. It has software to easily change the images as well as the macros assigned to each button. The folder Structure allows 6 different apps to be configured with 3 macro keys each. The software allows the open deck to update with whatever app is open as well as open an app when buttons are pressed.

An easy to use interface allows you to easily upload and set macros.

Full Video and build guide here:

# Software:
The sofware is still evolving and I am by no means a software engineer but all of the functionality is there. 
## GUI Interface

<img src="Images/gui.jpg" width="400">


Provided is a compiled .exe program as well as all the source code (written in python). Extract the zipped folder and run the .exe, no python libary installs required.


The Open Deck communicates with a PC over a serial USB connection. The software can automatically detect and connect to the Open Deck when it is plugged in.

The program is first used to upload images and set the macro's. After that it runs in the background to send keystrokes when the buttons are pressed.

Note: the automatic window switching only works on windows currently

written in python and uses the customtkinter interface for displaying the gui

## Uploading Images
The PC application makes it super easy to upload images. The files can be any size and the program does all of the conversion for you. At the moment each image can only be a single colour when uploaded through the GUI. When uploading an image the black part of the image will be shown in the chosen colour and the rest will be black. See Additional Features section for how to do images with multiple colours.

The select & upload button will prompt the user to select an image from the file system as well as choose a colour from a colour picker.

## Setting Macros
The macros are sent using the python keyboard library.

If more complex macros are required I recommend setting it to some unused combination and then remapping this combination using something like auto hot key. (Not going to try re-invent the wheel here)

## Window Switching/application setup
One usefull feature on the open deck has is the ability to have the buttons change depending on which application is currently open as well. It can also open an app when a button on the open deck is pressed.

By inputting the application name for each menu of the open deck, the program will look for a window containing this name to either control the open deck or have the open deck control/activate this window.

On windows there are 3 settings for automatically switching windows and/or current open deck state.


## Arduino
All of the code running on the ESP8266 on the Open Deck itself is using arduino. The images are stored as a bitmap in SPIFFS so that they remain after a power cycle and are not relient on a computer connection.

When a key is pressed it sends a correlated number (1-16) over serial to the program running on the computer. 

# Hardware
See the BOM for a full list of all of the required components. Visit my tindie store to support the project by buying parts or a full unit: https://www.tindie.com/products/27756/  

Things of Note:

- The display is a 128x160 tft display. The exact display is quite important as the hole patten and pinout needs to fit the custom PCB's. (See BOM for Link)

- An ESP8266 is being used as the micro-controller as it is small, low cost, has enough flash memory to store all of the images as well as having WiFi to allow for additional features. Importantly for everything to fit this needs to be a WEMOS D1 Mini V4 with a USB-C Connector

- Low Profile M2 Screws used for clearance (Length is critical)


## 3D Printed Parts
All parts can be printed with no supports. Print in the orientation shown below:

Body:

<img src="Images/Body.png" width="300">

Bottom Cover:

<img src="Images/Bottom_Cover.png" width="300">

Window Holder:

<img src="Images/Window_Holder.png" width="300">

Spacer:

<img src="Images/Spacer.png" width="300">


## CNC Machined Parts
### Carbon Fibre Top Plate
The carbon top plate is made out of 1mm thock carbon fibre. Chamfers improve the look while allowing the countersunk screws the be flush with the surface

### Acrylic Key Caps
The 'Key Caps' are machined out of 4.5mm thick acrylic. They are all the same design.

These can also be made out of 1.5mm and 3mm laser cut acrylic glued together if you do not have access to a CNC. I have found the best glue for this is UV curable glue used for some phone screen protectors.

These could also potentially be SLA 3D printed from clear resin and polished to get a transparent finish.


## PCB
The PCB folder contains a zipped folder of the GERBER files required to have the PCB manufactured.

# Additional Features:
Another use case for the open deck is to control smart home deviced. The ESP8266 is a common wifi chip and could be setup for automations without needing to be connected to a host computer. 

Currently no example code for this but simply change the serial write commands in the arduino program to send a comand with your favourite service such as MQTT. This can then be integrated with something like home assistant. Images can still be uploaded with the GUI interface and are stored locally on the device so will remain even after a power cycle.

If you want images with multiple colours these currently need to be manually entered into the arduino code. The python file called image uploader will output the correct bitmap which can be used in the arduino code. One image will needed to be made for each colour in the image. A pre-made example of this can be uncommented for a chrome logo. Final imges are 48x72 pixels stored as a bitmap. the last 3 bytes od the message sent over serial contain the RGB colour of the icon.