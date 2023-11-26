#FUNCTIONS
#Definig Greatest number

def Greatest_num(numbers):
    maxnum = numbers[0]
    for i in range(len(numbers)):
        if maxnum < numbers[i]:
            maxnum = numbers[i]
    
    return maxnum

#_main_
# Input

print('This is a program to calculate maximum valued element in a series of numbers')
nums = eval(input('\nEnter a series of numbers : '))
mx = Greatest_num(nums)

#Output

print('\nGreatest number in the given series : ',mx)