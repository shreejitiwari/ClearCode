import tkinter as tkr
from tkinter.constants import BOTH, HORIZONTAL, VERTICAL, X, Y
from tkinter import Button, Canvas, Frame, Label, XView, YView, ttk
from tkinter.font import Font
from PIL import Image, ImageTk
import ctypes

ctypes.windll.shcore.SetProcessDpiAwareness(1)


root = tkr.Tk()
# root.attributes('-alpha',0.95)
root.geometry('1920x1080')

main_frame = tkr.Frame(root)
main_frame.pack(fill = BOTH,expand=1)




bg_pic = ImageTk.PhotoImage(file='my programs\GUI\wallpaperflare.com_wallpaper.png')
bg_main_win = tkr.Label(main_frame ,image=bg_pic)
bg_main_win.place(x=0,y=0)
# bg_main_win.bind


welcome_canvas = Canvas(main_frame,width=700,height=680,bg= 'white')
welcome_canvas.place(x=620,y=150)

Welcome_message = Label(welcome_canvas, text = "ProtoS",bg='white',font= Font(family='Georgia', size='40'))
Welcome_message.place(x=250,y=50)

proto_logo_ad = ImageTk.PhotoImage(file='D:\PROTOS Internationals\PROTO S Visuals\Walpaper5.png')
proto_logo =  Label(welcome_canvas, image=proto_logo_ad, bg='white')
proto_logo.place(x=170,y=200)




root.mainloop()