# SELECTION SORTING

ar = list(eval(input("List : ")))

for i in range(len(ar)):
    elem1 = minn = ar[i]
    
    for num in ar[i:len(ar)]:
        if minn > num:
            minn = num
 
    ar[ar.index(minn)] , ar[ar.index(elem1)] = elem1 , minn
    
    
print("Sorted List : ",ar)