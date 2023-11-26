import pickle

check = input('Enter password to access this program : ')
if check == 'cs_lover':

    while True:    
                    
            print('''\n\nWelcome to Save n Fetch password :

            1) Save
            2) Fetch
            3) Exit
            ''')

            choice = input('Enter your choice (1 or 2 or 3) : ')

            if choice == '1':
                fout = open(f'E:\Documents\jfalkdj','ab')
                while True:
                    id = input('Enter id  : ')
                    platform = input('Enter platform : ').lower()
                    password = input('Enter Password : ')

                    record = {'ID' : id , 'Platform' : platform , 'Password' : password}
                    pickle.dump(record,fout)
                    
                    
                    print('\n')
                    proceed = input('Do you wanna enter next record (y/n)  : ').lower()

                    if proceed in ['n' , 'no']:
                        break


                print('\n\nRECORD ENTERD\n\n')    
                fout.close()

            elif choice == '2':

                fin = open(f'E:\Documents\jfalkdj','rb')

                id_enter = (input('Enter the "id" of the record you want  : '))

                got_record = False

                while True:
                    try:
                        rec = pickle.load(fin)
                        # if id_enter == rec['ID']:
                        #     print('Record Found !!\n')

                        #     got_record = True
                        for key in rec:
                            print(f"{key}  :  {rec[key]}")
    
                        print("\n\n")

                    except EOFError:
                        break

                if got_record == False:
                    print('Record not found !!')

                fin.close()


            elif choice == '3':
                break

            else: 
                print('Invaid Choice')

    input('Press ENTER to EXIT...')
    exit()
        
else :
    input('Incorrect password !!! \nPress Enter')
    exit()