# FUNCTIONS
# Area of Circle
def ar_circle():
    r = (eval(input('\nEnter the radius : ')))
    
    if r>0:
        p = (input('You want to specify the value of pie (y/n) : '))

        if p == 'y':
            p = eval(input('\nEnter value of pie : '))
            circle_area = p*r**2
            print('\nArea of circle of radius =',r,', pie =',p,',  =  ',circle_area)
            
        else:
            circle_area = 3.14*r**2
            print('\nArea of circle of radius =',r,'=',circle_area)
    
    else:
        print('\nRadius of a circle should be >0 !!\n')    

    
    
# Area of Rectangle
def ar_rectangle():
    l = eval(input('\nEnter length of rectangle : '))
    b = eval(input('Enter breadth of rectangle : '))
    
    if l>0 and b>0:    
        rec_area = l*b
        print('\nArea of rectangle of length =',l,', breadth =',b,',  =  ',rec_area)

    else:
        print('\nLength and breadth of a rectangle should be >0 !!\n')

   

# Area of Triangle
def ar_triangle():
    b = eval(input('\nEnter base length of triangle : '))
    h = eval(input('Enter height of triangle : '))
    
    if b>0 and h>0:
        tri_area = 0.5*b*h
        print('\nArea of triangle of base =',b,',','height =',h,',  =  ',tri_area)

    else:
        print('\nBase length and height of a triangle should be >0 !!\n')

    
# _main_

# INPUT

print('This is an area calculator \n')
while True:
    print('''
    (a) Area of Circle
    (b) Area of Rectangle
    (c) Area of Triangle
    (d) EXIT
    ''')
    
    choice = input('Enter your choice : ').lower()


# OUTPUT

    if choice in ['a','b','c']:

        if choice == 'a':
            ar_circle()

        elif choice == 'b':
            ar_rectangle()
                
                
        elif choice == 'c':
            ar_triangle()


    elif choice == 'd':
        print('\nEnding the program...\n')
        print('-------******************--------')
        break
    
    else:
        print('\nInvalid choice entered !!')
                
     
    print('===========================================================================')
        
        