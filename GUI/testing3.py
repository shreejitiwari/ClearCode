import tkinter
from tkinter.constants import BOTH
import PIL.Image, PIL.ImageTk
import ctypes

# Create a window
window = tkinter.Tk()
window.resizable()

frame = tkinter.Frame(window) # relief=SUNKEN)

# frame.grid_rowconfigure(0, weight=1)
# frame.grid_columnconfigure(0, weight=1)

canvas = tkinter.Canvas(frame)
canvas.pack(fill=BOTH,expand=1)

xscrollbar = tkinter.Scrollbar(frame, orient=tkinter.HORIZONTAL)
xscrollbar.grid(row=1, column=0, sticky=tkinter.E+tkinter.W)

yscrollbar = tkinter.Scrollbar(frame)
yscrollbar.grid(row=0, column=1, sticky=tkinter.N+tkinter.S)

canvas.grid(row=0, column=0, sticky=tkinter.N+tkinter.S+tkinter.E+tkinter.W)
canvas.configure(xscrollcommand=xscrollbar.set, yscrollcommand=yscrollbar.set)



File = "my programs\GUI\wallpaperflare.com_wallpaper.png"
img = PIL.ImageTk.PhotoImage(PIL.Image.open(File))
canvas.create_image(0,0,image=img, anchor="nw")

xscrollbar.config(command=canvas.xview)
yscrollbar.config(command=canvas.yview)

canvas.config(scrollregion=canvas.bbox(tkinter.ALL))

frame.pack()


ctypes.windll.shcore.SetProcessDpiAwareness(1)
window.mainloop()