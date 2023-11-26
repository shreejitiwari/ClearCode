import tkinter as tk
# from tkinter import ttk
from tkinter.font import Font
import ttkbootstrap as ttk
import ctypes


ctypes.windll.shcore.SetProcessDpiAwareness(1)


# FUNCTONS
def convert():
    usd_ = usd.get()
    inr_ = inr.get()

    if (inr_ == 0):
        inr_ = round((usd_*82.0965), 2)
        inr.set(inr_)


    elif (usd_ == 0):
        usd_ = round((inr_*0.012181), 2)
        usd.set(usd_)


def reset():
    usd.set(0)
    inr.set(0)




# Window

# window = tk.Tk()
window = ttk.Window(themename = "journal")
window.title("Currency Converter")
window.geometry("1000x500")


# Title
title_label = ttk.Label(master=window, text="USD to INR", font=Font(family="Arial", size=30))
title_label.pack(pady=10)


# Input Frame
usd = tk.DoubleVar()
inr = tk.DoubleVar()
input_frame = ttk.Frame(master=window)
dollar_box = ttk.Entry(master=input_frame, textvariable=usd, font=("Arial", 18))
dollar_label = ttk.Label(master=input_frame, text="US Dollar")
inr_label = ttk.Label(master=input_frame, text="Indian Rupee")
ruppee_box = ttk.Entry(master=input_frame, textvariable=inr,  font=("Arial", 18))

# dollar_box.pack(side="left", padx=50)
# ruppee_box.pack(side="left", padx=50)

dollar_box.place(x=50,width=300, height=150)
ruppee_box.place(x=450,width=300, height=150)
inr_label.place(x=550,y=150, height=25)
dollar_label.place(x=150,y=150, height=25)

input_frame.place(x=100, y=120, width=1000,height=300)


# Buttons

button_frame = ttk.Frame(master=window)
convert_button = tk.Button(master=button_frame, text="Convert" ,command=convert)
reset_button = tk.Button(master=button_frame, text="Reset" ,command=reset)

convert_button["font"] = Font(size=15)
reset_button["font"] = Font(size=15)

# convert_button.pack(side="left")
# reset_button.pack(side="left")

convert_button.place(x=350)
reset_button.place(x=550)
button_frame.place(y=350, width=1000, height=50)



window.mainloop()