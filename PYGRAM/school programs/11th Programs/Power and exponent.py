while True:
    e=float(input('Enter the number : '))
    p=int(input('Enter the power : '))
    
#     if p!=0:
#         n=e
#         
#         if p>0:
#             c=1
#             while c<p:
#                 e=e*n
#                 c+=1
#             print('\n')
#             print(n,'to the power',p,' = ',e)
#         
#         if p<0:
#             c=-1
#             while c>p:
#                 e=e*n
#                 c-=1
#             print('\n')
#             print(n,'to the power',p,' = ',(1/e))

    if p==0:
        print(e,'to the power',p,' = ',1)
        
    if p>0:
        n=e
        for d in range(1,p):
            e=e*n
            print('\n')
        print(n,'to the power',p,' = ',e)

    print('\n\n=======================================\n')