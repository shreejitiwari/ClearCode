n=input('Enter a anything : ')

if n.isalpha() :
    print(n,' is an alphabetic.\n')
    
    if n.isupper():
        print(n,'is in upper case.')
    
    elif n.islower():
        print(n,'is in lower case')
            
elif n.isnumeric():
    print(n,' is numeric')

elif n.isalnum() :
    print(n,' is alpha-numeric ')
    
else:
    print(n,' is another character')
