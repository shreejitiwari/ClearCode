dct={'January':31,'February':28,'March':31,'April':30,'May':31,'June':30,'July':31,'August':31,'September':30,'October':31,
'November':30,'December':31}

# (a)
month=input('(a)\nEnter the month name : ').capitalize()
print('No. of days in',month,' = ',dct[month])

# (b)
mnth=[]
for k in dct:
    mnth.append(k)
mnth.sort()
print('\n(b)\nKeys in Alphabetical order : ',mnth)

# (c)
print('\n(c)\nMonths having 31 days ',end=' : ')
for m in dct:
    if dct[m]==31:
        print(m,end=' , ')
