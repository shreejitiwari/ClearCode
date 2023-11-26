def binary_search(array, target):
    min=0 
    max=len(array)-1 
    counter=0 
    while max>=min:
        guess=int((min+max)/2) 
        counter+=1 
        if array[guess]==target:
            return {'result':guess,'counter':counter} 
        elif array[guess]>target: 
            max=guess-1
        elif array[guess]<target:
            min=guess+1
            
    return -1 
            
            
array=[x**2 for x in range(1,10000)] # array from 1-10^8
result=binary_search(array,int(input("target number "))) # note: function returns dictonary or -1
print("found at position %d after %d guesses" %(result['result'],result['counter'])) if result!=-1 else print("number is not in array")