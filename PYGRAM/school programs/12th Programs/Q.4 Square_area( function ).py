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
    
def sqar_arg_return(side):
    area = side**2
    return area

# _main_

# INPUT

print('This is an Area calculator for square..\n')

l = eval(input('Enter the side length of square : '))

if l>0:
        
    # Using without argument

    print('\nUsing without argument : ')
    sqar_no_arg()

    # Using with argument

    print('\nUsing with argument : ')
    sqar_arg(l)

    # Using with argument and with return

    print('\nUsing with argument and with return : ')
    area = sqar_arg_return(l)
    print('Area of Square of side',l,' = ',area)
    print('\n===============================================================\n')


else:
    print('\nSide length of square should be +VE !!\n')

















