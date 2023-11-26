while True:
    n1 = int(input("Enter the 1st number : "))
    n2 = int(input("Enter the 2nd number : "))
    n3 = int(input("Enter the 3rd number : "))

    if n2<n1<n3 or n2>n1>n3:
        print('Second largest number is ',n1)
    elif n1<n2<n3 or n1>n2>n3:
        print('Second largest number is ',n2)
    else:
        print('Second largest number is ',n3)
    print('\n\n=======================================\n')