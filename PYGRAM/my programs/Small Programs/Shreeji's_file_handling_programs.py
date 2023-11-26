def new_line():
    # ## 1) Program to create a file and add data to it such that everytime we write "."(full stop) in our input , it would write the later text in next line.                                                                                                                                                                                                                                                     

    # MADE BY SHREEJI

    print('\n # 1) Program to create a file and add data to it such that everytime we write "."(full stop) in our input , it would write the later text in next line. #\n')
    fout = open('new_line_file' , 'a')
    record = input('What do you want to write in the file : ').split('.')

    new_rec = ''

    if record[len(record)-1] == '':
        for line in record[0:len(record)-1] :
            new_rec += line.strip()+'.\n'

    else:
        for line in record[0:len(record)] :
            new_rec += line.strip()+'.\n'

    # print(new_rec)

    fout.write(new_rec)
    fout.close()
    print('\nRecords successfully written in the text file . \n')

    fin = open('new_line_file' , 'r')
    print(f'Records written in the file : \n\n {fin.read()}')

    print('\n\n=============================================================\n\n')
    # input('\nPress ENTER to EXIT...')
    ## MADE BY SHREEJI , © Shreeji Tiwari






def special_char():
    

    # ## 2) Program to extract only simple text(without special character and symbols) from a text file
    print('# 2) Program to extract only simple text(without special character and symbols) from a text file # \n')

    cr = input('Do you want to enter data in the special_char_file.txt (y/n) : ').lower()
    
    if cr == 'y':
        
        fout = open('special_char_file.txt','a')

        t = int(input('\nHow many lines you want to enter  :  '))

        for i in range(t):
            data_to_write = input('\nWhat you want to write(with special characters) in the file  : ')
            fout.write(data_to_write+'\n')

        fout.close()
        print('\n\n=============================================================\n\n')


    # MADE BY SHREEJI

    fin = open('special_char_file.txt' , 'r')

    lines = fin.readlines()
    sp_cnt = 0
    sm_cnt = 0

    print('\n\nspecial_char_file.txt file data without any special characters : \n')

    for line in lines:
        for word  in line.split():
            for char in word:
                if char.isalnum() == True:
                    print(char,end = '')
                    sm_cnt += 1
                    
                else:
                    sp_cnt += 1

            if char.isalnum() == True:
                print('',end=' ')
       
        print('')
        
    fin.close()    
    print(f'\n\nNumber of special characters in the file  : {sp_cnt}')
    print(f'Number of simple characters in the file  : {sm_cnt}')
    # input('\nPress ENTER to EXIT...')

    # MADE BY SHREEJI , © Shreeji Tiwari






# # My file handling PROGRAMS (for demo class)

print('File handling demo class programs made by © Shreeji Tiwari')
print('''
We have 2 programs here :

1) Program to create a file and add data to it such that everytime we write "."(full stop) in our input ,
it would write the later text in next line.

2) Program to extract only simple text(without special character and symbols) from a text file

3) Exit

''')

while True:
    program = int(input('Which one do you want to run  : '))

    if program == 1:
        new_line()

    elif program == 2:
        special_char()

    elif program == 3:
        input("Press ENTER to EXIT ...  ")
        break

    else:
        print('Invalid choice ...')









