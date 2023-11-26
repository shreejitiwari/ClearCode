# Area of Square functions
# DEFINING FUNCTIONS

def sqar_no_arg():
    global l
    area = l*l
    print('Area of Square of side',l,' = ',area)
    print('\n===============================================================\n')
    
def sqar_arg(side):
    area = side**2
    print('Area of Square of side',l,' = ',area)
    print('\n===============================================================\n')

def sqar_no_arg_return():
    global l
    area = l*l
    return area

def sqar_arg_return(side):
    area = side**2
    return area


# _main_

# INPUT

print('This is an Area calculator for square..\n')

while True:
    
    print('''
    (a) Without argument no return
    (b) With argument no return
    (c) Without argument with return
    (d) With argument with return
    (e) EXIT
    ''')
    
    choice = input('Enter your choice (a,b,c,d,e) : ').lower()
    
    if choice in ['a','b','c','d']:

        l = eval(input('\nEnter the side length of square : '))

        if l>0:
                
            # Using without argument
            if choice == 'a':
                print('\nUsing without argument : \n')
                sqar_no_arg()

            # Using with argument
            if choice == 'b':
                print('\nUsing with argument : \n')
                sqar_arg(l)

            # Using without argument and with return
            if choice == 'c':
                print('\nUsing without argument and with return : \n')
                area = sqar_no_arg_return()
                print('Area of Square of side',l,' = ',area)
                print('\n===============================================================\n')

            # Using with argument and with return
            if choice == 'd':
                print('\nUsing with argument and with return : \n')
                area2 = sqar_arg_return(l)
                print('Area of Square of side',l,' = ',area2)
                print('\n===============================================================\n')


        else:
            print('\nSide length of square should be +VE INTEGER !!\n')
            
            
    elif choice == 'e':
        print('\nENDING THE PROGRAM...')
        break

    else:
        print('\nYou Entered an invalid choice...\n')
        print('==========================================================')

