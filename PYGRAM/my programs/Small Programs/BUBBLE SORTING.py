# BUBBLE SORT

ar = list(eval(input("List : ")))

for i in range(len(ar)):
    for index in range(len(ar)-1):
        if ar[index] > ar[index+1]:
            ar[index] , ar[index+1] = ar[index+1] , ar[index] 
    
print("Sorted List : ", ar)