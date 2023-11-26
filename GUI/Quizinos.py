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
root.title("Quizinos")
main_frame = tkr.Frame(root)
main_frame.pack(fill = BOTH,expand=1)

# canvas1 = tkr.Canvas(main_frame)
# canvas1.pack(side = 'left' , fill = BOTH , expand=1)



# Getting all the images required
exitbtn_img = ImageTk.PhotoImage(file=r'D:\GUI\exit_btn.png')
playbtn_img = ImageTk.PhotoImage(file=r'D:\GUI\play_btn.png')
bg_pic = ImageTk.PhotoImage(file=r'D:\GUI\wallpaperflare.com_wallpaper2.jpg')

# scroller_vertical = ttk.Scrollbar(main_frame, orient=VERTICAL, command= canvas1.yview)
# scroller_vertical.pack(side='right', fill=Y)

# scroller_horizontal = ttk.Scrollbar(main_frame, orient=HORIZONTAL, command= canvas1.xview)
# scroller_horizontal.pack(side='bottom', fill=X)


# canvas1.configure(yscrollcommand=scroller_vertical.set)
# canvas1.bind('<Configure>', lambda e: canvas1.configure(scrollregion=canvas1.bbox('all')))

# frame2 = Frame(canvas1)
# canvas1.create_window((0,0) , window= frame2)

bg_main_win = tkr.Label(main_frame ,image=bg_pic)
bg_main_win.place(x=0,y=0)




def welcome():
    welcome_canvas = Canvas(main_frame,width=700,height=680)
    welcome_canvas.place(x=620,y=150)
    
    app_name  = Label(welcome_canvas, text = "Quizinos\n",font= Font(family='Georgia', size='40'))
    app_name.place(x=220,y=50)
    
    play_button = Button(welcome_canvas,image=playbtn_img, relief='flat')
    play_button.place(x=200,y=250)

    exit_button = Button(welcome_canvas,image=exitbtn_img, relief='flat', command = lambda : root.destroy())
    exit_button.place(x=200,y=400)



welcome()
root.mainloop()