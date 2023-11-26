print('Hello ! \nI am a program to check whether a number is prime or not')
while True:
    num=int(input('Enter a number : '))
    if num>1:
        for c in range(2,num//2+1):
            n=num%c
            if n==0:
                print(num,' is NOT PRIME')
                break
        else:
            print(num,' is PRIME')
    if num==1:
        print('1 is NOT PRIME')
    print('++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++')
        
