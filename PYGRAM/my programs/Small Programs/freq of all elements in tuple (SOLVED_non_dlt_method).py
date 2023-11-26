# counting the frequency of all the elements in a tuple
print('3) counting the frequency of elements in a tuple \n')

tup3=eval(input('Enter a tuple : '))
tup_3=sorted(tup3)                         #For ease

num_lst=[]
freq_lst=[]

cnt=0

for n in tup_3:
    num=n
    
    if num not in num_lst:
        for i in tup_3:
            if num==i:
                cnt=cnt+1
        
        num_lst.append(num)
        freq_lst.append(cnt)

        cnt=0



for c in range(len(num_lst)):
    print('Frequency of',num_lst[c],' = ',freq_lst[c])






#    for dlt in range(cnt):               # REMOVING THE ELEMENTS COUNTED
 #       tup_3.remove(num)
    
            
    

