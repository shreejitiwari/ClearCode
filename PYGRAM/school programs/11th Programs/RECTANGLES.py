#Area & Perimeter of rectangle
while True:
    l=float(input('Enter length of rectangle ='))
    b=float(input('Enter breadth of rectangle ='))
    area=l*b
    peri=2*(l+b)

    if l>0 and b>0:
        print('Area of rectangle = ', area)
        print('Perimeter of rectangle = ', peri)
        print('----------------------------------\n----------------------------------\n----------------------------------')
        

    
        
    else:
        print('please enter +ve numbers since distance cannot be negative')
        print('----------------------------------\n----------------------------------\n----------------------------------')

        
    
