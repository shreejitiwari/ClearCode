# My first tkinter program
import tkinter as tkr
from PIL import Image, ImageTk
import ctypes

frame = tkr.Tk()
frame.attributes('-alpha',0.9)
frame.title("About Family")
frame.configure(background = "#1B4449")
frame.resizable(width=True,height=True)



abt = \
{
 
 "SP Tiwari" : "Mr. SP Tiwari is Father of Shreeji Tiwari and Abha Tiwari and son of Late Laxmi Narayan Tiwari \
and Mrs. Shyampati Tiwari. His Wife is Mrs. Mamta Tiwari. His date of birth is 19 June 1977. He is \
currently a warrent officer in Indian Air Force. He has an IQ of 156. He is a really great thinker and motivator \
and a responsible father too..",

"Mamta Tiwari" : "Mrs. Mamta Tiwari is mother of Shreeji Tiwari and Abha Tiwari. She is the daughter of \
 Mr. Chhavinath Pandey and Mrs. Shail Kumari. Her husband is Mr. SP Tiwari. Her date of birth is 1 October 1979. She is a\
 very loving mother and a very good home-maker. She is kind hearted. She a great thinker, and women supporter.",

"Abha Tiwari" : "Abha Tiwari is an 18 year old young girl studying in B-Tech 2nd semester in Amity Gwalior. She is an \
 idea box with lots of great ideas that can bring a positive change in our world. She is a unique and responsible youth\
 of the Nation.",

"Shreeji Tiwari" : "Shreeji Tiwari is a 16 year old techie, who aspires to change the world by using Artificial \
 intellegence. She is currently studying in 12 standard in KV 2 Gwalior. She wishes to be an AI Developer and an \
 Entrepreneur, open up a tech company of robots and AIs. She is highly focused towards her aims and will achieve them.\
 By the way, she is also the developer of this app." 

}

    

    
colour = {"SP Tiwari":"#D6E600" , "Mamta Tiwari":"#EC9D46" , "Abha Tiwari":"#E068F8" , "Shreeji Tiwari":"#75CFEB"}
    
    


def tell_about(pn):
    
    img = (Image.open("D:\PYGRAM\my programs\Big Projects\ABOUT FAMILY MEMBERS\\" + pn+".jpg")).resize((540,360))
    img = ImageTk.PhotoImage(img)

    result.config(text ="\n" + pn + "\n\n" + abt[pn] + "\n" ,fg = colour[pn] ,image=img, compound = tkr.RIGHT,)
    result.image = img





label = tkr.Label(frame, text="This program will tell you something about the following people.\nClick anyone you want !!",\
                  font = "none 25 bold" , bg="#1B4449", fg = "#6767E3" , relief = "groove")
label.pack() 





result = tkr.Label(frame, text = "About will appear here",bg="#1B4449",fg = "#DAB0B0" ,font = "none 25 ",\
                   relief="solid", wraplength=910)
result.pack(padx=5,pady=70)





for person in abt.keys():
    btn = tkr.Button(frame, text = person, fg = "black", bg = colour[person],font = "none 20" , command = lambda person=person : tell_about(person))
    # btn["font"] = font.Font(size=20)
    btn.pack(padx=10,pady=10, anchor="n")
    



Exit = tkr.Button(frame, text = "Exit",bg = "red", font = "none 20 bold", command = lambda : frame.destroy())
# Exit["font"] = font.Font(size=20)
Exit.pack(side = "bottom") 




ctypes.windll.shcore.SetProcessDpiAwareness(1)


frame.mainloop()