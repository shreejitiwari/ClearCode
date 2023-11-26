while True:
    try:
        year=int(input('Enter the year : '))
        if year>0:
            if year%4==0:   #every year divisible by 4 is a leap year.
                print(year,' is a leap year.')
            else:
                print(year,' is not a leap year.')
        else:
            print('pagla gaye ho ka ?? year bhi kabhi negative hota hai')
    except:
        print('Provide positive integer value only.')
