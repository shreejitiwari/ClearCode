while True:
    try:
        weekday=['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
        inpt=int(input('Enter a number between 1 to 7 : '))
        if inpt>7 or inpt<1:
            print('PLEASE ENTER THE NUMBER BETWEEN "1" TO "7"')
        
        else:
            print(weekday[inpt-1])
        
    except:
        print('You gave an invalid input')
