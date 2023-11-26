# counting the frequency of all the elements in a tuple
print('3) counting the frequency of elements in a tuple \n')

tup3=eval(input('Enter a tuple : '))
tup_3=sorted(tup3)                         #For ease

cnt=0

for n in range(0,len(tup_3)):
    if len(tup_3)<=0:
        break
    else:
        num=tup_3[0]
    
    for i in tup_3:
        if num==i:
            cnt=cnt+1
    
    print('Frequency of ',num,' = ',cnt)
        
    for dlt in range(cnt):               # REMOVING THE ELEMENTS COUNTED
        tup_3.remove(num)
    
    cnt=0
