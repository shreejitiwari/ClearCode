import random

pno_1 = int(input('Enter your Phone number : '))
pno_2 = int(input('Enter receiver\'s Phone number : '))

line=str(input('\nEnter your message :-\n'))


if pno_1 < pno_2:
    pass_key=random.randint(pno_1,pno_2)     #Key required to decode the message
else:
    pass_key=random.randint(pno_2,pno_1)     #Key required to decode the message


code=[]
code_dict=dict()
cnt=1

for word in line.split():
    for char in word:
        code.append(int(ord(char)) + int(pass_key*0.0024))
    
    code_dict[cnt] = code
    code=[]
    cnt+=1

line = code_dict

print('Okay, your message is enscripted....\nHere is the code : \n\n',line)
print('\nAnd your pass_key is : ',pass_key)
