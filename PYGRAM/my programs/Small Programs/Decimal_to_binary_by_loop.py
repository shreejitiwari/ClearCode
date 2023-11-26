decimal = int(input('Enter any interger value whose binary value you want : '))
binary = ''

while True:
    binary += str(decimal%2)
    decimal //= 2

    if decimal == 0:
        break

binary = binary[::-1]
print(f'Binary of {decimal} = {binary}')
input('Press ENTER to exit !!')