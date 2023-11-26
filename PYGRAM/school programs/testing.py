n = int(input("Enter n : "))
i = 1

while i<=n:
    print(f'{i}')

    if i%10==0 and i!=0:
        cont = int(input("You want to continue ((y = 1/n = 0)) : "))
        if cont==0:
            break
        else:
            i += 1
            continue

    i += 1