while True:
    C=float(input('Enter the Temperature :'))
    print('What is the unit of this temperature\n1)Celcius\n2)Kelvin\n3)Fahrenheit ? \nJust tell the number from above\n\n')
    unit=str(input(':-'))
    if unit=='1':
        K = C + 273.15
        F = (9/5)*C+32
        print('Temperature in Kelvin', '=', K)
        print('Temperature in Fahrenheit','=',F)

    elif unit=='2':
        Ce=C - 273.15
        F=(9/5)*(Ce)+32
        print('In Celcius,          Temperature','=',Ce)
        print('In Fahrenheit,       Temperature','=',F)

    elif unit=='3':
        Ce = (C-32)*(5/9)
        K = Ce + 273.15
        print('In Celcius,           Temperature','=',Ce)
        print('In Kelvin,            Temperature','=',K)

    print('***********============************')
    print('***********============************')
    print('***********============************\n')



