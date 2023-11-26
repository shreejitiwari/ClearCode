#FUNCTION

def fact(number):
    factorial = number
    
    if number == 0:
        return 1    
    else:
        factorial *= fact(number-1)
        number -= 1
    
    return factorial

#_main_

print('This is a program to calculate factorial\n')

num = eval(input('Whose factorial you want : '))

if type(num) == int and num>0:
    factorial = fact(num)
    print('\nFactorial : \n',num,'! = ',factorial)
    
else:
    print('No factorial exists for',num)





