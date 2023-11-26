import mysql.connector as mc
connection = mc.connect(host = 'localhost' , user = 'root' , password = '', database = "gmail")
cursor = connection.cursor()



check = input('Enter password to access this program : ')
if check == 'cs_lover':

    while True:    
                    
            print('''\n\nWelcome to Save n Fetch password :

            1) Save
            2) Fetch
            3) Modify
            4) Exit
            ''')

            choice = input('Enter your choice (1 or 2 or 3 or 4) : ')

            if choice == '1':
                
                while True:
                    id = input('Enter id  : ')
                    platform = input('Enter platform : ').lower()
                    password = input('Enter Password : ')

                    command = f'insert into data values("{id}", "{password}", "{platform}")'
                    cursor.execute(command)

                    print('\n')
                    proceed = input('Do you wanna enter next record (y/n)  : ').lower()

                    if proceed in ['n' , 'no']:
                        break


                print('\n\nRECORD ENTERD\n\n')    
                

            elif choice == '2':

                id_enter = (input('Enter the "id" of the record you want  : '))

                command = f'select * from data where Email_ID = "{id_enter}"'
                cursor.execute(command)
                result = cursor.fetchone()
                if (result):
                    email, pword, plat = result
                    print(f'Email : {email}')
                    print(f'Password : {pword}')
                    print(f'Platform : {plat}')


                else:
                    print("Record not found !")

                

            # elif choice == 3:



            elif choice == '4':
                break

            else: 
                print('Invaid Choice')

    input('Press ENTER to EXIT...')
    exit()
        
else :
    input('Incorrect password !!! \nPress Enter')
    exit()