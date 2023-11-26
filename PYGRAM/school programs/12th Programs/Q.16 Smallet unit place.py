# FUNCTION
def min_one(num1,num2):
    '''This function take two positional arguments of integer numbers num1 and num2 and checks
        whose 1\'s digit is samller '''
    if str(num1)[-1] > str(num2)[-1]:
        return num2
    elif str(num1)[-1] < str(num2)[-1]:
        return num1
    elif str(num1)[-1] == str(num2)[-1]:
        print('Both have same unit place')
        exit()
  
# _main_
print("This is a program to take two integers and return the number with smallest 1\'s digit\n")  
a = int(input("Enter 1st number : "))
b = int(input("Enter 2nd number : "))  
  
result = min_one(a,b)  
print("\nNo. with smallest unit place : ",result)
