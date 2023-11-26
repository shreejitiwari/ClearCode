# Defining power and base with argument
def expo(base,power=1):
    value = 1
    for i in range(power):
        value *= base
    print(base,'**',power,' = ',value)
    
# Defining power and base without argument
def expo2():
    global base
    global power
    value = 1
    for i in range(power):
        value *= base
    print(base,'**',power,' = ',value)
    
'_main_'
print('This is a program to calculate power.. \n')

base = eval(input('Enter base : '))
power = eval(input('Enter power : '))

print('\nUsing function with arguments i.e expo(base,power) : \n')
expo(base,power)

print('\nUsing function without arguments i.e expo2(base,power) : \n')
expo2()
