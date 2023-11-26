keys=eval(input('Enter keys of the dictionary : '))
values=eval(input('Enter values of the dictionary : '))

dct=dict(zip(keys,values))
print('\n',dct)

val=eval(input('\nEnter the value you want to search in the dictionary : '))

if val in dct.values(): 
    print('\n',val,' is found in the dictionary values at keys : ',end=' ')
    for v in dct:
        if val==(dct[v]):
            print(v,end=' , ')
            

else:
    print(val,' is not found in the values')
        
    