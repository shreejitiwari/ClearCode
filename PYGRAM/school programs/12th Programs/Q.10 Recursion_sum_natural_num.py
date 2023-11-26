# FUNCTION

def rec_sum(n):
    num_sum = n
    
    if n == 1:
        return 1
    
    else:
        num_sum += rec_sum(n-1)
    
    return num_sum

#_main_

print('This is a program to calculate sum of "n" natural numbers !!\n')

num = eval(input('Upto how many natural numbers, you want the sum : '))

if type(num) == int and num > 0:
    print('Sum upto',num,'natural numbers = ',rec_sum(num))
    
else:
    print('Sum of',num,'numbers is not possible as it is not a natural number !!')







        