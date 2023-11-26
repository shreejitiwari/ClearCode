ch=input('Enter a character(single alphabet) :- ')
char=ch.lower()

vovels = ['a','e','i','o','u']
consonants = ['b','c','d','f','g','h','j','k','l','m','n',\
'p','q','r','s','t','v','w','x','y','z']

if char in vovels:
    print('"',ch,'"',' is a VOVEL')

elif char in consonants:
    print('"',ch,'"',' is a CONSONANT')
    
else:
    print('Only a single alphabet is accepted  !!')
