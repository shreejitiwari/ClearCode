string=input('Enter a string :- ')
new_str=''


for n in range(0,len(string),2):
    new_str+=string[n].lower()
    if n+1>len(string)-1:
        break
    new_str+=string[n+1].upper()

print(new_str)
