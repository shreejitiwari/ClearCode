# FUNCTION
def rec_sum_series(numbers):
    num_len = len(numbers)
    n = num_len-1
    
    if num_len == 0:
        return 0
    
    else:
        num_sum = numbers[n]
        num_sum += rec_sum_series(numbers[0:num_len - 1])
        
    return num_sum


#_main_

print('This a program to find the sum of all the numbers in a given series of numbers ')

series = eval(input('Enter a series of numbers : '))

if type(series) == tuple or type(series) == list :
    print('Sum of numbers in the given series',series,' = ',rec_sum_series(series))
    
else:
    print('Sum is not possible for the given input !!')


