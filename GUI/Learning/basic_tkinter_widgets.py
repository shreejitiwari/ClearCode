import tkinter as tk
from tkinter import ttk
import ctypes


ctypes.windll.shcore.SetProcessDpiAwareness(1)


# functions
def button_func():
    print(input_box .get())
    # label.config(text=input_box.get())  OR
    label["text"] = input_box.get()
    input_box["state"] = "disabled"

def reset():
    label['text'] = "Label reset"
    input_box['state'] = "enabled"
    print("Reset done")




"""def change_val():
    textbox.set("Hello")
    
def get_text():
    print(textbox.get(0))
    """


# creating a window
window = tk.Tk()
window.title("Widgets")
window.geometry("1000x800")


# ttk label
label = ttk.Label(master=window, text="This is a label")
label.pack()


# tk text
textbox = tk.Text(master=window)
textbox.pack()


# ttk entry
input_box = ttk.Entry(master=window)
input_box.pack()


# ttk button
button = ttk.Button(master=window, text="button", command=button_func)
button.pack()

"""change_button = ttk.Button(master=window, text="Change value", command=change_val)
change_button.pack()"""

"""text_button = ttk.Button(master=window, text="get text", command=get_text)
text_button.pack()"""

another_button = ttk.Button(master=window, text="RESET", command=reset)
another_button.pack()


# run
window.mainloop()
