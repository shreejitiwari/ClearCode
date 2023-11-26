lst=list(eval(input('Enter a list of numbers : ')))
n_lst=[]
print('Entered list : ',lst)

for n in range(len(lst)):
    elem=lst[0]

    for e in lst:
        if elem>e:
                elem=e
    n_lst.append(elem)
    lst.remove(elem)


print('Sorted list : ',n_lst)