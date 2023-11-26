from Rastauri_script import * 
import Rastauri_db_creation

line = ' '*50 + '|    RaStAuRi    |' + ' '*50

print('*'*len(line))
print(' '*50 , '|   RaStAuRi   |' , ' '*50)
print("\n\tIt's time to upgrade your travel experience with RaStAuRi. You travel,we will make it better")
print('*'*len(line))

while True:
    print('''\n
    1) Login
    2) Exit\n''')


    choice = int(input('Enter your choice :- '))


    if choice == 1:
        user_login = login()
        try:
            login_success = user_login[0]
            user_table = user_login[2]
            mail_id = user_login[1]
            
        except:
            pass
        
        if login_success:
            while True:
                if user_table.lower() == 'rider_data':
                    rider_data = extract_user_data(mail_id, user_table)
                    
                    print('''\n
                    1) Find Driver
                    2) Account settings
                    3) Logout
                    4) Exit\n''')

                    choice = int(input('Enter your Choice :- '))
                    if choice == 1:
                        ad_data = additional_data()
                        driver_data = select_driver(ad_data)
                        code = send_rider_data_to_driver(ad_data,mail_id, user_table,driver_data)
                        send_driver_data_to_rider(rider_data,code,driver_data)

                    elif choice == 2:
                        rec_up_ch = record_updation(user_table,mail_id)
                        if rec_up_ch == '3':
                            break
                    elif choice == 3:    
                        break
                    elif choice == 4:
                        print('Thank you For Using Rastauri..')
                        input('Press Enter to exit..')
                        exit()
                        
                    else:
                        print('Invalid Input..')

                elif user_table.lower() == 'driver_data':

                    print('''\n
                    1) Account settings
                    2) Change time of availability
                    3) Logout
                    4) Exit''')

                    choice = int(input('Enter your choice :- '))
                    if choice == 1:
                        rec_up_ch = record_updation(user_table,mail_id)
                        if rec_up_ch == '6':
                            break
                    elif choice == 2:
                        time_change(mail_id,user_table)
                    elif choice == 3:
                        break
                    elif choice == 4 :
                        print('Thank you For Using Rastauri..')
                        input('Press Enter to exit..')
                        exit()
                    else:
                        print('Invalid Input..')

        else:
            print('Login Unsuccessfull...')

    elif choice == 2: 
        break
        
    else:
        print('\nInvalid Input..😡😡\n')
        continue

print('Thank you For Using Rastauri..')
input('Press Enter to exit..')