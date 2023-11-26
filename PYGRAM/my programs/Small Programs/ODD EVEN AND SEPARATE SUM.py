lst=eval(input('Enter list : '))
osum=0

print('\nOdd numbers in the list : ',end='')
        
for i in lst:
    if i%2!=0:
        print(i,end=',')
        osum=osum+i
if osum==0:
    print('There is no odd number in the list.')
print('\nsum of odd numbers = ',osum)


print('\n\n')


esum=0

print('Even numbers in the list : ',i,end=',')

for i in lst:
    if i%2==0:
        print(i,end=',')
        esum=esum+i

if esum==0:
    print('There is no even number in the list.')
print('\nsum of even numbers = ',esum)

