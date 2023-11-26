def max_len(iterable):
    mx = 0
    for line in iterable:
        if len(str(line)) > mx:
            mx = len(str(line))
    return mx



# #Main

# name_lst = []
# roll_lst = []
# marks_lst = []

# while True:
#     nm = input('\n\nEnter name  : ')
#     rl = int(input('Enter Roll No.  : '))
#     marks = float(input('Enter marks  : '))
    
#     name_lst.append(nm)
#     roll_lst.append(rl)
#     marks_lst.append(marks)
    
#     wish = input('\n\nDo you want to enter next record (y/n) : ').lower()
    
#     if wish in ['n','no']:
#         print('\nOkay..\nHere is the result : \n')
#         break

roll_lst = [1,2,21,32]
name_lst = ['Abhay','Abhiyendru','Lovely','Shreeji']
marks_lst = [20,35,37,40]

space = ' '
heading = f'|  ROLL NO{space:{max_len(roll_lst)}}| NAME{space:{max_len(name_lst)}}|  MARKS{space:{max_len(marks_lst)}}|'
print('+',"="*int(len(heading)-2),'+',sep = '')
print(heading)
print('+',"="*int(len(heading)-2),'+',sep = '')

for n in range(len(roll_lst)):
    data = f'|  {roll_lst[n]:<{max_len(roll_lst)+7}}| {name_lst[n]:<{max_len(name_lst)+4}}|  {marks_lst[n]:<{max_len(marks_lst)+5}}|'
    print(data)
    print('+',"-"*int(len(heading)-2),'+',sep = '')





