while True:
        n=int(input('Whose factorial you want:'))
        print('FOR METHOD\n\n ')
        
        if n>0:
                for f in range(1,n):
                     n=f*n
                print(n)
        elif n==0:
                n=1
                print(n)
        else:
                print('There is no factorial for the given input !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!')

        print('\n\n\n')

        
        print('WHILE METHOD\n\n ')
        n=int(input('Whose factorial you want:'))


        if n>0:
            f=1
            c=1
            while c<=n:
                    f*=c
                    c=c+1
            print(f)
        print('\n\n\n')


