# finding the minimum, maximum, mean of values stored in a tuple
# print('1) Finding the minimum, maximum, mean of values stored in a tuple \n')
# 
# tup=eval(input('Enter integer tuple : '))
# print('Maximum value = ',max(tup))
# print('Minimum value = ',min(tup))
# print('Mean of the values = ',sum(tup)/len(tup))
# 
# print('\n')



# linear search on a tuple of numbers
# print('2) linear search on a tuple of numbers \n')
# 
# tup2=eval(input('Enter a tuple of integers : '))
# num=int(input('Enter the number you want to sarch in the tuple : '))
# 
# if num in tup2:
#     print('\n',num,' is FOUND in the tuple at :',end=' ')
#     
#     for c in range(len(tup2)):
#         if num==tup2[c]:
#             print(c+1,end=' , ')
#     
# else:
#     print('\n',num,' is NOT FOUND in the tuple ')


# counting the frequency of all the elements in a tuple
print('3) counting the frequency of elements in a tuple \n')

tup3=eval(input('Enter a tuple : '))
tup_3=sorted(tup3)
# ln=len(tup_3)
cnt=0

for n in tup_3:
    num=tup_3[0]
    cnt=0
    
    for i in range(len(tup_3)):
        if num==tup_3[i]:
            cnt=cnt+1
            
        
        else:
            for dlt in range(cnt):
                tup_3.remove(num)
            break
            
    print('Frequency of ',num,' = ',cnt)
    cnt=0















