
lst=list(eval(input('enter a list :\n')))
print('\n(1) Even number in list are :\n')
for even in lst:
    if even%2==0:
        print(even)
            

print('\n(2) Odd number in list are :\n')
for odd in lst:
    if odd%2!=0:
        print(odd)
        

print('\n(3) Reverse order of given lst : \n ')
print(lst[-1:-len(lst)-1:-1])
