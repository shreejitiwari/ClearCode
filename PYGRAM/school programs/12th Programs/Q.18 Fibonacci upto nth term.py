# FUNCTION
def fibonth(n):
    global a
    global b
    global c
    global count
    
    if n==1:
        print(a)
    
    elif n==2:
        print(a,b,sep=",")
        
        
    elif count<n:
        c= a+b
        print(a,end = ",")
        a,b=b,c
        count+=1
        fibonth(n)
        
    elif count == n:
        print(a)

n=int(input('Enter a number upto which you want Fibonacci series length = '))
a=0
b=1
c=a+b
count = 1

if n<1:
    print("No fibonacci series is possible for given value of 'n' !!")
    
else:
    fibonth(n)
    






