string=input('Enter the string :- ')
rev_str = string[::-1]
if rev_str==string:
    print('"',string,'"',' is a palindrome')
else:
    print('"',string,'"',' is not a palindrome')
    