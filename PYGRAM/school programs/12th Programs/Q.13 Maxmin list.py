#FUNCTION
def max_num(lst):
    max_num = lst[0]
    for num in lst:
        if max_num<num:
            max_num = num
    return max_num


def min_num(lst):
    min_num = lst[0]
    for num in lst:
        if min_num>num:
            min_num = num
    return min_num


#_main_
print("This is a program to calculate maximum and minimum element from list\n")

while True:
    print('''1) Maximum of list
2) Minimum of list
3) Exit''')

    choice = input("\nEnter your choice : ").lower()
    
    if choice in ['1','2','maximum of list','minimum of list','max','min']:
        lst = list(eval(input("Enter a list of numbers : ")))
        
        if choice in ['1','maximum of list','max']:
            maximum = max_num(lst)
            print("Maximum : ",maximum)
            
        elif choice in ['2','minimum of list','min']:
            minimum = min_num(lst)
            print("Minimum : ",minimum)
            
            
            
    elif choice in ['3','exit','end the program']:
        print('Ending the program !!')
        break
    
    else:
        print('Invalid Choice !!')
        
    print('\n==========================================\n')
