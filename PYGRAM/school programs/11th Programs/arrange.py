while True:
    n1 = int(input("Enter the 1st number : "))
    n2 = int(input("Enter the 2nd number : "))
    n3 = int(input("Enter the 3rd number : "))

    if n1>n2:  # n2,n1
        if n1>n3:  # n3,n1
           if n2>n3 : # n3,n2,n1
               print(n3,n2,n1)
           else:  # n2,n3,n1
               print(n2,n3,n1)
        else: #n1,n3
           print(n2,n1,n3)
    else: # n1,n2
        if n2>n3:  # n3,n2
           if n1>n3 : # n3,n1,n2
               print(n3,n1,n2)
           else:  # n1,n3,n2
               print(n1,n3,n2)
        else: #n2,n3
           print(n1,n2,n3)
