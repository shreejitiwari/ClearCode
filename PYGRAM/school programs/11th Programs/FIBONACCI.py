n=int(input('Enter a number upto which you want Fibonacci series = '))
a=0
b=1
c=a+b
print('using while loop :')
print(a)
print(b)

while c<=n:
    c=a+b
    if c>n:
        break
    print(c)
    a,b=b,c
    
    
A=0
B=1
C=A+B
print('using while loop :')
print(A)
print(B)
for C in range(A,n+1):
    C=A+B
    if C>n:
        break
    print(C)
    A,B=B,C