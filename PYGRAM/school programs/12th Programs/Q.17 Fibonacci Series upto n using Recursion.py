# FUNCTION
def fibo(n):
    global a
    global b
    global c
    
    
    if n == 0:
        print(a)
    
    elif n == 1:
        print(a,b,sep = ",")
    
    elif a<n:
        c = a + b
        print(a,end = ",")
        a,b = b,c
        fibo(n)
    
    elif a==n:
        print(a)
    
# _main_
n=int(input('Enter any number "n" upto which you want Fibonacci series = '))
a=0
b=1
c=a+b


if n>=0:
    fibo(n)
    
else:
    print("No fibonacci series possible for given input !!")
    
    
    
    
    
    