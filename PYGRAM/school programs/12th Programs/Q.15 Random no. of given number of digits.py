from random import randrange
#FUNCTION
def rand_num_digit(no_of_digits):
    '''It will take input of no. of digits and return any random number with given no. of digits'''
    l_lmt = eval("1"+"0"*(no_of_digits-1))
    u_lmt = eval("9"*(no_of_digits))+1
    
    return randrange(l_lmt,u_lmt)

# _main_
print('This program will take input of no. of digits and return any random number with given no. of digits')
n = abs(int(input("Enter any positive integer : ")))

rand_num = rand_num_digit(n)
print("\nRANDOM NO. WITH",n,"DIGITS = ",rand_num)