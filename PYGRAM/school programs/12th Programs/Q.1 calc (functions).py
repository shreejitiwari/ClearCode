# DEFINING ARITHMETIC FUNCTIONS WITH ARGUMENTS
def add(a,b):
    sum = a + b
    print(a,'+',b,'=',sum)
    
def diff(a,b):
    diff = a - b
    print(a,'-',b,'=',diff)
    
def prdct(a,b):
    prdct = a*b
    print(a,'x',b,'=',prdct)
    
def divide(a,b):
    qnt = a/b
    print(a,'/',b,'=',qnt)
    
def add2():
    global a
    global b
    sum = a + b
    print(a,'+',b,'=',sum)
    
# DEFINING ARITHMETIC FUNCTIONS WITHOUT ARGUMENTS
def diff2():
    global a
    global b
    diff = a - b
    print(a,'-',b,'=',diff)
    
def prdct2():
    global a
    global b
    prdct = a*b
    print(a,'x',b,'=',prdct)
    
def divide2():
    global a
    global b
    qnt = a/b
    print(a,'/',b,'=',qnt)




'_main_'
print('This is a python calculator for 2 numbers (Made by Founder and CEO of ProtoS)...\n')

a = eval(input('Enter 1st number : '))
b = eval(input('Enter 2st number : '))

print('\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n')
choice = input('Enter your choice  (out of 1,2,3,4) : ')

if choice=='1':
    print('\n\nUsing functions with arguments i.e add(a,b) : \n')
    add(a,b)
    print('\n\nUsing functions without arguments i.e add2() : \n')
    add2()   

elif choice=='2':
    print('\n\nUsing functions with arguments i.e diff(a,b) : \n')
    diff(a,b)
    print('\n\nUsing functions without arguments i.e diff2() : \n')
    diff2()     

elif choice=='3':
    print('\n\nUsing functions with arguments i.e prdct(a,b) : \n')
    prdct(a,b)
    print('\n\nUsing functions without arguments i.e prdct2() : \n')
    prdct2() 

elif choice=='4':
    print('\n\nUsing functions with arguments i.e divide(a,b) : \n')
    divide(a,b)
    print('\n\nUsing functions without arguments i.e divide2() : \n')
    divide2() 

else:
    print('Invalid choice !!')


# print('\nUsing functions with arguments : ')
# add(a,b),diff(a,b),prdct(a,b),divide(a,b)
# 
# print('\nUsing functions without arguments : ')
# add2(),diff2(),prdct2(),divide2()