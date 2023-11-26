while True:
    print('+++++++++++++++++**************+++++++++++++++++')

    n=input('Enter any single key : ')
    if len(n)==1:
        if n>='A' and n<='Z':
            print(n,' is an UPPER CASE character')
        elif n>='a' and n<='z':
            print(n,' is a LOWER CASE character')
        elif n>='0' and n<='9' :
            print(n,' is a digit ')
        else:
            print(n,' is another character')
    else:
        print('Enter a single digit')
