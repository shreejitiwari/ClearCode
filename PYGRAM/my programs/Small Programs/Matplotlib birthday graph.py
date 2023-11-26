import matplotlib.pyplot as mlp
import numpy as np

x = np.array(["Shreeji","Abha","Mummy","Papa"])
y = np.array([2005,2003,1979,1977])

mlp.plot(x,y,ls="-",c = "red", marker = ".",lw=3, mfc = "g",mec="g",ms = 15)


font1 = {'family':'calibri','color':'k',"weight":"bold",'size':30}
font2 = {'family':'calibri','color':'blue','size':20}


mlp.title("Birthdays", fontdict=font1)
mlp.xlabel("Names", fontdict=font2)
mlp.ylabel("Birth years", fontdict=font2)

mlp.grid(ls="--",lw=1,c="green")

mlp.show()

