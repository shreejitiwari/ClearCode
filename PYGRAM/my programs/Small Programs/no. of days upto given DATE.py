dt=input('Enter full date in DD/MM/YYYY format : ').split('/')
date , month , year = eval(dt[0]) , eval(dt[1]) , eval(dt[2])

# date=int(input('Enter the date :- '))
# month=(input('Enter the month name :- ')).lower() 
# year=int(input('Enter the year :- '))

mon=['january','february','march','april','may','june','july','august','september','october','november','december']
days_no=[31,31,30,31,30,31,31,30,31,30,31]

if year%4==0:
    days_no.insert(1,29)
else:
    days_no.insert(1,28)
                
mdx=month-1
nom=0
mnth=0

if 12>=month>0:
    if 0<date and date <= days_no[mdx]:
        
        while mnth<mdx:
            nom+=int(days_no[mnth])
            mnth+=1
        nom+=date
        print('Number of days in year upto date',date,mon[mdx].capitalize(),year,' = ',nom)                                
        print(f'% of year completed = {round(nom*100/sum(days_no),2)}')
    else:
        print('There are only',days_no[mdx],'days in',mon[mdx],'i.e :\n',list(range(1,days_no[mdx]+1))) 

else:
    print('No such date possible !!')

input('Press Enter to exit')