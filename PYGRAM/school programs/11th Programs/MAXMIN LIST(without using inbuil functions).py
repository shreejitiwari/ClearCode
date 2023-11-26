lst=list(eval(input('Enter a list of numbers : ')))
n_min=lst[0]
n_max=lst[0]

for num in lst:
    if n_min>num:
        n_min=num

    if n_max<num:
        n_max=num

print('Minimum valued element in list : ',n_min)
print('Maximum valued element in list : ',n_max)
