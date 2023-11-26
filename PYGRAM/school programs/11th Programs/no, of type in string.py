string=(input('Enter the string : '))
up_lst=[]
low_lst=[]
digit_lst=[]

for letter in string:
    if letter==' ':
        continue
     
    elif 'A'<=letter<='Z':
        up_lst.append(letter)

    elif 'a'<=letter<='z':
            low_lst.append(letter)

    elif '0'<=letter<='9':
            digit_lst.append(letter)


print('Total number of uppercase letters in the sting = ',len(up_lst))
print('Total number of lowercase letters in the sting = ',len(low_lst))
print('Total number of alphabets in the sting = ',len(up_lst)+len(low_lst))
print('Total number of digits in the sting = ',len(digit_lst))
