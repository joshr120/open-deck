from asyncio.windows_events import NULL
from cgi import print_arguments
import numpy as np
import cv2
import matplotlib.pyplot as plt
#from turtle import delay
import serial
import time
import  tkinter
import customtkinter
from tkinter import *
from tkinter import ttk
from tkinter import filedialog
from tkinter.colorchooser import askcolor

import serial.tools.list_ports

COMports = []


customtkinter.set_appearance_mode("dark")  # Modes: "System" (standard), "Dark", "Light"
customtkinter.set_default_color_theme("blue")  # Themes: "blue" (standard), "green", "dark-blue"

name_dict = {    #remove this in future and just edit name (current way is dumb, just for testing)
"Home 1": b'home_1\n',
"Home 2": b'home_2\n',
"Home 3": b'home_3\n',
"Home 4": b'home_4\n',
"Home 5": b'home_5\n',
"Home 6": b'home_6\n',
"Menu 1": b'menu_1\n',
"Menu 2": b'menu_2\n',
"Menu 3": b'menu_3\n',
"Menu 4": b'menu_4\n',
"Menu 5": b'menu_5\n',
"Menu 6": b'menu_6\n',
"Menu 7": b'menu_7\n',
"Menu 8": b'menu_8\n',
"Menu 9": b'menu_9\n',
"Menu 10": b'menu_10\n',
"Menu 11": b'menu_11\n',
"Menu 12": b'menu_12\n',
"Menu 13": b'menu_13\n',
"Menu 14": b'menu_14\n',
"Menu 15": b'menu_15\n',
"Menu 16": b'menu_16\n',
"Menu 17": b'menu_17\n',
"Menu 18": b'menu_18\n'
}

OPTIONS = [  #loop?
"Home 1",
"Home 2",
"Home 3",
"Home 4",
"Home 5",
"Home 6",
"Menu 1",
"Menu 2",
"Menu 3",
"Menu 4",
"Menu 5",
"Menu 6",
"Menu 7",
"Menu 8",
"Menu 9",
"Menu 10",
"Menu 11",
"Menu 12",
"Menu 13",
"Menu 14",
"Menu 15",
"Menu 16",
"Menu 17",
"Menu 18"
]


##############################
#        File selector       #
##############################
def imgPicker():
    root = tkinter.Tk()
    root.withdraw()
    file_path = filedialog.askopenfilename()
    print(file_path)
    if (file_path):
        colors = askcolor(title="Tkinter Color Chooser")
        print(colors[0])
    return (file_path,colors)


##############################
#         Send Images        #
##############################
def imgSender(file_path, image, border, colors):
    #print(image)
    #manual path (not used anymore)
    #path = r'C:\Users\Josh\Desktop\3d Printer Files\Macro Keyboard\Icons\insta.jpg'

    #################################
    # convert colours to byte array #
    #################################
    colour = bytearray()
    colour = [colors[0][0],colors[0][1],colors[0][2]] #colour in RGB

    img = cv2.imread(file_path,0)

    #####################################
    #    Resize image to correct with   #  
    #####################################
    height,width = img.shape
    #print(width)
    #print(height)

    if (width!=54):
        scale_factor = 54/width
        new_height = int(height*scale_factor)
        dim = (int(54), int(new_height))
        img = cv2.resize(img, dim, interpolation = cv2.INTER_AREA)

    height,width = img.shape

    ###############################
    # add empty border to make image smaller 
    # (smaller image used to show selection)
    ###############################
    if (border): #if board is to be added (for making image smaller)
        img = cv2.copyMakeBorder(src=img, top=10, bottom=10, left=10, right=10, borderType=cv2.BORDER_CONSTANT, value=[255,255,255]) 
        height,width = img.shape
        if (width!=54): #do this for a second time to 
            scale_factor = 54/width
            new_height = int(height*scale_factor)
            dim = (int(54), int(new_height))
            img = cv2.resize(img, dim, interpolation = cv2.INTER_AREA)

    height,width = img.shape
    #print(width)
    #print(height)

    ##############################
    #       image cropping       #
    ##############################
    crop_height = 0 #height that image sarts at is tller than 70 px (to center it)
    start_height = 0 #where the image starts if less than 70px (to center it)
    max_height = 70 #if the imaage less than 70px stop at end of image
    if (height > 70): #if image larger than 70 high after resize then centre it
        crop_height = int((height-70)/2)
    elif (height < 70):
        start_height = int((70-height)/2)
        max_height = height

    #convert to black and white from 0 to 1
    img_reverted= cv2.bitwise_not(img)
    new_img = img_reverted / 255.0

    mono_img_width = ((54//8+1)*8)
    mono_img = np.zeros((70, mono_img_width))

    #print(mono_img)

    #############
    #convert numpy array into 0 and 1 (mono colour) (puts image into centre of height as well)
    #############
    for y in range(0, max_height):
        for x in range(0, 54):
            if (new_img[y+crop_height][x] < 0.5):  #if compare pixel to threshold (make selectable in future with slider)
                mono_img[y+start_height][x] = 0
            else:
                mono_img[y+start_height][x] = 1

    outputArray = []
    #convert into binary bmp format
    for y in range(0, 70):
        #print("")
        for x in range(0, mono_img_width, 8):
            if (y < start_height or y > (start_height + height)):
                binary = "00000000"  # make outside pixels empty
            else:
                #turn 8 pixels into one hex number
                binary = str(int(mono_img[y][x]))+str(int(mono_img[y][x+1]))+str(int(mono_img[y][x+2]))+str(int(mono_img[y][x+3]))+str(int(mono_img[y][x+4]))+str(int(mono_img[y][x+5]))+str(int(mono_img[y][x+6]))+str(int(mono_img[y][x+7]))
            #print("0x{:02x},".format(int(binary,2)),end = ' ')
            outputArray.append(int(binary,2))
          
    #print the final image array
    print(outputArray)
        
    #sent image and colour to serial port
    ser = serial.Serial(portSelect.get(), baudSelect.get())
    time.sleep(0.5)
    ser.write(image)
    val = ser.readline()

    print("")
    print(val)

    packet = bytearray()
    packet = outputArray
    ser.write(packet)
    #colour = [33,150,255]
    #colour = [0,255,0]
    time.sleep(0.2)
    ser.write(colour)
    #time.sleep(0.5)
    
    ########################
    # Visualize the result #
    ########################
    # plt.imshow(mono_img, cmap='gray')
    # plt.xlim(0,54)
    # plt.show()

    # while True:        # output feedback (use for success verification in the future)
    #     val = ser.readline()
    #     print(val)

    ser.close() 


###########################################
#              Make the GUI               #
###########################################

app = customtkinter.CTk()
app.geometry("500x500")
app.title("Macro Keyboard Image Uploader")


def button_callback():
    #print ("value is:" + combobox_1.get())
    file_path, colors = imgPicker()

    if (file_path != NONE and colors != NONE):
        to_update = name_dict[combobox_1.get()] #file name to send to serial

        imgSender(file_path, to_update, 0, colors) #function which send the file

        if (to_update.decode()[0:4]=="menu"): #if it is  a menu item also send a smaller image (done by adding border)
            withS = (to_update.decode()[:-1]+"s\n").encode()
            imgSender(file_path, withS, 1, colors) #function which send the smaller image this time

app.grid_rowconfigure(0, weight=1, minsize=400)
app.grid_columnconfigure(0, weight=1, minsize=400)

frame_1 = customtkinter.CTkFrame(master=app)
frame_1.pack(pady=20, padx=60, fill="both", expand=True)

frame_1.grid_columnconfigure(0, weight=1)
frame_1.grid_columnconfigure(1, weight=1)

ports = serial.tools.list_ports.comports()
COMports = []
for port, desc, hwid in sorted(ports):
    COMports.append(port+": "+desc)
    #COMports.append(port)

topLabel = customtkinter.CTkLabel(master=frame_1, justify=tkinter.LEFT, text="Upload Images")
#topLabel.pack(pady=(12,0), padx=10)
topLabel.grid(row=0, column=0, columnspan=2, padx=20, pady=10, sticky="ew")
topLabel.configure(font=("Arial", 25))


portLabel = customtkinter.CTkLabel(master=frame_1, justify=tkinter.LEFT, text="Select Port:")
#portLabel.pack(pady=(12,0), padx=10)
portLabel.grid(row=1, column=0, columnspan=1, padx=0, pady=10, sticky="e")

portSelect = customtkinter.CTkComboBox(frame_1, values=COMports)
#portsSelect.pack(pady=0, padx=10)
portSelect.grid(row=1, column=1, columnspan=1, padx=0, pady=10, sticky="w")

#auto port connect
for port, desc, hwid in sorted(ports):
    if ("USB-SERIAL CH340" in desc):
        print("Auto Detect:")
        print(port)
        portSelect.set(port)

baudLabel = customtkinter.CTkLabel(master=frame_1, justify=tkinter.LEFT, text="Select Baud Rate:")
#baudLabel.pack(pady=(8,0), padx=10)
baudLabel.grid(row=2, column=0, columnspan=1, padx=20, pady=10, sticky="e")

baudSelect = customtkinter.CTkComboBox(frame_1, values=["9600", "115200"])
#baudSelect.pack(pady=0, padx=10)
baudSelect.grid(row=2, column=1, columnspan=1, padx=0, pady=10, sticky="w")
baudSelect.set("115200")

label_1 = customtkinter.CTkLabel(master=frame_1, justify=tkinter.LEFT, text="Choose Item to Update")
#label_1.pack(pady=(15,5), padx=10)
label_1.grid(row=3, column=0, columnspan=2, padx=20, pady=(30,10), sticky="ew")
label_1.configure(font=("Arial", 12))

combobox_1 = customtkinter.CTkComboBox(frame_1, values=OPTIONS)
#combobox_1.pack(pady=2, padx=10)
combobox_1.grid(row=4, column=0, columnspan=2, padx=80, pady=10, sticky="ew")
combobox_1.set("Home 1")

button_1 = customtkinter.CTkButton(master=frame_1, command=button_callback, text="Select & Upload")
#button_1.pack(pady=12, padx=10)
button_1.grid(row=5, column=0, columnspan=2, padx=80, pady=10, sticky="ew")

app.mainloop()