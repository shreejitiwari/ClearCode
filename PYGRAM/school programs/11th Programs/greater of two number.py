while True:
    a=int(input('ENTER ANY INTEGER = '))
    b=int(input('ENTER ANOTHER INTEGER = '))

    if a>b:
        print(a,'is greater than ',b)
        
    elif a==b:
        print(a, ' and ' ,b, 'are same')
        
    else:
        print(b,'is greater than ',a)
