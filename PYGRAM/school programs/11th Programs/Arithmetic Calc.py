print('Hello !! I am a calculator .\n\n')
while True:

    print('\n')
    print('1) Addition (+)\n2) Subtraction (-)\n3)Multiplication (*)\
    \n4)Division (/)5)Modulas (%)')
    print('\n')
    
    
    f=input('What you want to do ??\n')
    print('\n')
    print('okay')
    print('\n')

    a=float(input('Enter your first number = '))
    b=float(input('Enter your second number = '))
    print('\n')

    

    if f=='Addition' or f=='1' or f=='+':
        print(a,'+',b,'=',a+b)

    elif f=='Subtraction' or f=='2' or f=='-':
        print(a,'-',b,'=',a-b,'\n')
        print(b,'-',a,'=',b-a)

    elif f=='Multiplication' or f=='3' or f=='*':
        print(a,'x',b,'=',a*b)

    elif f=='Division' or f=='4' or f=='/':
        print(a,'/',b,'=',a/b,'\n')
        print(b,'/',a,'=',b/a)

    elif f=='Modulas' or f=='5' or f=='%':
        print(a,'%',b,'=',a%b,'\n')
        print(b,'%',a,'=',b%a)

    else:
        print('Please choose a operator from the above choices ....! ')
