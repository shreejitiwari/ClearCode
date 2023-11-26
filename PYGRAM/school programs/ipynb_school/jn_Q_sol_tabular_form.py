file = open(r'D:\PYGRAM\school programs\ipynb_school\marks_data_tabular_form.txt','a+')
# If you are not Shreeji, use following open file command
#file = open(r'marks_data_tabular_form.txt','a+')


file.seek(0,0)

file_heading_data = file.readlines()
# print(file_heading_data)
# for line in file_heading_data:
#     print(line)

if file_heading_data == []:

    sub_name1 = input('Enter the name of 1st subject : ')
    sub_name2 = input('Enter the name of 2nd subject : ')
    sub_name3 = input('Enter the name of 3rd subject : ')


    maxm = int(input('Maximum marks (per subject) : '))

    heading = f"\n| ROLL NO |{' NAME ':^30}| MARKS IN {sub_name1} | MARKS IN {sub_name2} | MARKS IN {sub_name3} | TOTAL MARKS | Percentage |"
    main_sep_line = '\n+' + "="*int(len(heading)-3) + '+'

    imp_info_dct = {'maxm':maxm , 'sub_name1':sub_name1 , 'sub_name2':sub_name2 , 'sub_name3':sub_name3}

    file.write(str(imp_info_dct))
    file.write(main_sep_line)
    file.write(heading)
    file.write(main_sep_line)

else:
    heading = file_heading_data[1]
    imp_info_dct = eval(file_heading_data[0].strip())
    maxm = imp_info_dct['maxm']
    sub_name1 = imp_info_dct['sub_name1']
    sub_name2 = imp_info_dct['sub_name2']
    sub_name3 = imp_info_dct['sub_name3']

while True:

    name = input('\n\nName of Student : ')
    roll = input('Roll number : ')
    sub1 = int(input(f'Marks of {name} in {sub_name1}  : '))
    sub2 = int(input(f'Marks of {name} in {sub_name2}  : '))
    sub3 = int(input(f'Marks of {name} in {sub_name3}  : '))
    print('\n')

    tot = sub1 + sub2 + sub3
    percentage = round(tot*100/(maxm*3),2)

    data = f"\n|{roll:^{len(' ROLL NO ')}}|{name:^30}|{sub1:^{len(f' MARKS IN {sub_name1} ')}}|{sub2:^{len(f' MARKS IN {sub_name2} ')}}|{sub3:^{len(f' MARKS IN {sub_name3} ')}}|{tot:^{len(f' TOTAL MARKS ')}}|{percentage:^{len(f' Percentage ')}}|"
    sep_line = '\n+' + "-"*int(len(heading)-3) + '+'

    file.write(data)
    file.write(sep_line)


    wish = input('\n\nDo you want to enter next record (y/n) : ').lower()
    
    if wish in ['n','no']:
        print('\nOkay..\nHere is the result : \n')
        break


file.seek(0,0)
for line in file:
    print(line,end = '')


file.close()

print('')
end = input('Press "Enter" key to exit ')