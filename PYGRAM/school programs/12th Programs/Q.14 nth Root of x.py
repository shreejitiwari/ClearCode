# FUNCTION
def nth_root(base,n=2):
    return base**(1/n)

# _main_
print("This is a program to find nth root of a number")
a = eval(input("Enter value of base : "))
b = eval(input("Enter value of n(power for 1/n) : "))

nth_rt = nth_root(a,b)

print(a,"**1/",b,"=",nth_rt)