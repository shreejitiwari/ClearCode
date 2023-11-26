def decToBinary(num):
    if (num == 0):
        return

    decToBinary(num // 2)
    print(num % 2,end="")


#calling the function
number = int(input('Enter a decimal interger number to convert to binary  : '))

print("Decimal equivalent of",number,"is ",end="")
decToBinary(number)
