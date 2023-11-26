line=str(input('Enter a line : '))

freq={}

for char in line:
    if char not in freq:
        freq[char]=1
    else:
        freq[char]+=1
print(freq)