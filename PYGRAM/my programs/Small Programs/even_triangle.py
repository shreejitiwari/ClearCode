# n = int(input('Enter any integer (for height of triangle): '))
# n = 5
# e = (n*2)

# for i in range(0,e,2):

#     print((e-i)*' ',end='')
#     for j in range(i):
#         print('*',end=' ')
#     print()
#     if i==0:
#         print(' '*(e-1),'*',sep='')

# input()

n = int(input('Enter any integer (for height of triangle): '))
e = (n*2)  

''' ye hieght aise decide karta hai : 
1) neeche ke for loop me har loop me ek line print hoti hai . ok . 
2) aur uss loop me step 2 ka diya hai. ok. aur no. of elements = e, "e" ke equal hain (e se 1 tak) 
3) to number of times wo loop chalega = e/step = e/2
4) to 2 se multiply isliye kiya kyuki fir 2 se divide hona tha.

example (if you doubt this logic): 
agar "n" ko 3 se multiply karoge to loop ka step bhi 3 kar dena
par isse bas number of stars disturb ho jayenge 
1st * ke baad 3 ki table chalne lagegi...

AUR RESET KAR DENA PROGRAM FIR ... '''

for i in range(e,0,-2):    # step me jo rakhoge uski table chal jayegi
    for k in range(i):
        print(f' ',end='')
    
    if i==e:                        # ye condition pehle wale single * ko print karane ke liye hai bas
        print('*',end='')  
    else:
        print(f' ',end='')           # ye condition baaki me starting ke equal space dene ke liye hai

    for j in range(0,e-i):          # ye number of * print karne ke liye hai
        print('*',end=f' ')

    print()

input()


"""# Ho gaya ab.. phir se mat aana aise lallu sawal leke..🤣
    THE END
    © Shreeji Tiwari """