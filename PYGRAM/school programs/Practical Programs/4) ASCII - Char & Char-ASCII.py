print("This is a program to find ASCII code of a character and tell character for a given ASCII code. \n")
print('''What is your choice :-
    1) ASCII to character
    2) Character to ASCII''')

choice = input("\nChoice (1 or 2) :- ").lower()

if choice in ['1','ascii to character']:
    ascii_code = int(input("Enter the ASCII code : "))
    print(f"Character corresponding to {ascii_code} = ",chr(ascii_code))
    
elif choice in ['2','character to ascii']:
    char = input('Enter the Character : ')
    print(f'ASCII Code of {char} = ',ord(char))
    
else:
    print('Invalid Choice..!!')