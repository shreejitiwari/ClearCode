tup=list(eval(input('Enter the tuple : ')))
mx2=tup[0]

for num in tup:
    if mx2<num<max(tup):
        mx2=num
print('2nd Largest number from a tuple : ',mx2)

#12,51,42,32,24,26,21