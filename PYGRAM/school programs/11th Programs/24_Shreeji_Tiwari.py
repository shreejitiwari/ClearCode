num=int(input('Enter any integer : '))
tup=[]

for x in range(1,5):
    n=num**x
    tup.append(n)

print('Tuple of ',num,' raised to the power 1,2,3,4 = ',tuple(tup))