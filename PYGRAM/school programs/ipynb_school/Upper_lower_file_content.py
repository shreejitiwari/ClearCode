file = open('copied_file.txt','a+')
file.seek(0)
data = file.read()
file.seek(0,1)
for char in data:
    if char.islower():
        file.seek(file.tell()-1)
        file.write(char.upper())

    else:
        file.seek(file.tell()-1)
        file.write(char.lower())

file.seek(0)
data = file.read()
print(data)

file.close()
