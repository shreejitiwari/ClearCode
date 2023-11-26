print('Choose any one operator : +, -, *, / ,**, %,// ')

operator=input('\nEnter the opertor :- ')
num1=float(input('Enter the first number :- '))
num2=float(input('Enter the second number :- '))

if operator == '+':
    print(num1,operator,num2,' = ',num1+num2)
    
elif operator == '-':
    print(num1,operator,num2,' = ',num1-num2)
    print(num2,operator,num1,' = ',num2-num1)

elif operator == '*':
    print(num1,operator,num2,' = ',num1*num2)
    
elif operator == '/':
    print(num1,operator,num2,' = ',num1/num2)
    print(num2,operator,num1,' = ',num2/num1)
    
elif operator == '**':
    print(num1,operator,num2,' = ',num1**num2)
    print(num2,operator,num1,' = ',num2**num1)
    
elif operator == '%':
    print(num1,operator,num2,' = ',num1%num2)
    print(num2,operator,num1,' = ',num2%num1)
    
elif operator == '//':
    print(num1,operator,num2,' = ',num1//num2)
    print(num2,operator,num1,' = ',num2//num1)
    
else:
    print('Wrong operator selected !!!')

