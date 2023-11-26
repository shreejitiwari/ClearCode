import tkinter as tk
# from tkinter import ttk
from tkinter.font import Font
import ttkbootstrap as ttk
import ctypes

ctypes.windll.shcore.SetProcessDpiAwareness(1)


# FUNCTIONS
def convert():
    inch = input_inch.get()
    cm = inch*2.54
    output_cm.set(cm)



# window

# window = tk.Tk()
window = ttk.Window(themename='united')
window.title("Unit Converter")
window.geometry("400x170")

# Title
title_label = ttk.Label(master=window, text="Inches to cm", font=Font(family="Calibri", size=24, weight="bold"))
title_label.pack()


# Input Field
input_frame = ttk.Frame(master=window)

input_inch = tk.IntVar()

input_box = ttk.Entry(master=input_frame, textvariable=input_inch)
submit_button = ttk.Button(master=input_frame, text="Convert", command = convert)

input_box.pack(side='left', padx=10)
submit_button.pack(side='left')
input_frame.pack(pady=10)


# Output

output_cm = tk.StringVar()
output_label = ttk.Label(
    master=window ,
    text='Output', 
    font=Font(family="Calibri"  , size=24),
    textvariable=output_cm)


output_label.pack(pady=5)


# run
window.mainloop()