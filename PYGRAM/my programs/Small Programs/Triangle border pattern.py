ht=abs(int(input('Enter required height of triangle : ')))
char=input('Enter a single character for border pattern : ')

if ht>0:
    n=1
    
    print(' '*int(ht+1),char,sep='')                     # for first line
    
    for i in range(ht,2,-1):                             # for middle lines
        print(' '*i,char,' '*int(n),char,sep='')
        n+=2

    print(' '*2,char*int(n+2),sep='')                    # for last line

else:
    print('No such triangle possible !!!')

input('Press Enter to exit..')