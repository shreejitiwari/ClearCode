# OTP
def otp():
    import os,math
    import random,sys
    import smtplib

    try:
      mailid=input("Enter your email ID :")
      digits="0123456789"
      OTP=""
      for i in range(6):
          OTP+=digits[math.floor(random.random()*10)]
      msg='Your OTP for Verification on RaStAuRi is '+OTP+'\n'+'Note: Please enter otp within 2 minutes, otherwise it will become invalid'
      # file2=open("otp.txt","w")
      # file2.write(OTP)
      # file2.close()
      # &&&&&&&&&&&&- Your mail id. SENDING OTP FROM mail id
      # ****- Your app password. If you do not know how to generate app password for your mail please google.
      s = smtplib.SMTP('smtp.gmail.com', 587)
      s.starttls()
      s.login('rastauri.management@gmail.com','jfbs cxom ttbg olfm')
      # print(msg)
      s.sendmail('rastauri.management@gmail.com',mailid,msg)
      entered_otp = input('Enter OTP : ')

      if OTP == entered_otp:
        return True,mailid

      else:
        return False, mailid
      #os.system('python second.py')

    except:
      print(f'The recipient address <{mailid}> is not valid !!!..😡')
      return False,mailid

# to create account for rider
def  Rider_data(email_id):
    import mysql.connector
    mycon=mysql.connector.connect(host="localhost",password="",user="root",database="RaStAuRi_Management")
    if mycon.is_connected()==False:
        print("Error connecting to database")
    cursor=mycon.cursor()
    name=input("Enter your name:")
    password=input("Enter your password:")
    phone_no=input("Enter your phone number:")
    # email_id=otp()[1]
    cursor.execute("insert into Rider_data(Rider_name,Password,Phone_number,Email_id) values('{}','{}','{}','{}')".format(name,password,phone_no,email_id))
    mycon.commit()
    print('\nYour account is created in Rastauri Database../\n')
    mycon.close()

#to create account for driver
def Driver_data(email_id):
    import mysql.connector
    mycon=mysql.connector.connect(host="localhost",password="",user="root",database="RaStAuRi_Management")
    if mycon.is_connected()==False:
        print("Error connecting to database")
    cursor=mycon.cursor()
    name=input("Enter your name:")
    password=input("Enter your password:")
    autorickshaw_no=input("Enter your vehicle's registration number:")
    no_of_seats = int(input("Enter the number of seats available in your vehicle:"))
    luggage=input("Does your vehicle have space for luggage(yes/no):")
    if luggage in ['yes','y','t','true']:
        luggage=1
    elif luggage in ['no','n','f','false']:
        luggage=0
    phone_no=input("Enter your phone number:")
    # email_id=otp()[1]
    cursor.execute("insert into Driver_data(Autodriver_name,Autorickshaw_number,Password,Number_of_seats,Luggage,Phone_number,Email_id) values('{}','{}','{}',{},'{}','{}','{}')".format(name,autorickshaw_no,password,no_of_seats,luggage,phone_no,email_id))
    mycon.commit()
    print('\nYour account is created in Rastauri Database../\n')
    mycon.close

# to determine which type of user
def Which_type_of_user(email):
     user=input("Enter if you are Rider or Driver:")
     if user.lower() == "rider":
        Rider_data(email)
        return Rider_data.__name__ 

     elif user.lower() == "driver":
        Driver_data(email)
        return Driver_data.__name__
         

     else:
        print("You have entered a wrong value.Please enter only Rider or Driver.")

# sign_up function
def sign_up():
    otp_data = otp()
    otp_verified = otp_data[0]
    email_id = otp_data[1]


    if otp_verified:
        user_table = Which_type_of_user(email_id)
        return True, email_id, user_table

    else :
        return False, None, None


def user_in_database(uid,cursor):
    # fetching rider's and driver's email id and password
    cursor.execute('select Email_id,password from rider_data')
    riders = {}
    for rec in cursor:
        riders[rec[0]]=rec[1]
        
    cursor.execute('select Email_id,password from driver_data')
    drivers = {}
    for rec in cursor:
        drivers[rec[0]]=rec[1]


    if uid in riders or uid in drivers:
        try:
            return True, drivers[uid], uid, 'Driver_data'
        
        except KeyError:
            return True, riders[uid], uid, 'Rider_data'

    else:
        return False, None, None, None

def forgot_password(cursor,connection):
    otp_verified , email_id = otp()
    if otp_verified:
        user_table = user_in_database(email_id,cursor)[3]
        new_password = input('Enter new password : ')
        command = f"UPDATE {user_table} set password = '{new_password}' where Email_id = '{email_id}'"
        
        cursor.execute(command)
        connection.commit()
        print('Password updated ...')
        connection.close()
        return True, new_password
        
    else:
        print('OTP not verified !')
        return False, None

def password_verification(user_pswd_in_db,cursor,connection):
    for i in range(3):
        # print(f'You have {3-i} chances ')
        entered_pswd = input('Enter password : ')
        
        
        if entered_pswd == user_pswd_in_db:
            return True
            # print(True)
            # break
            

        
        else:
            if i<2:
                print('Wrong password..!!\n\
                    1) Re-enter the password\n\
                    2) Forgot password\n')
                choice = input('Your choice (1 or 2) : ')

                if choice == '2':
                    # print('Abhi function banana hai')
                    # break
                    print('FORGOT PASSWORD')
                    pswd_updation = forgot_password(cursor,connection)
                    if pswd_updation[0]:
                        user_pswd_in_db = pswd_updation[1]
                    else:
                        pass

                    print('BACK TO LOGIN')

                elif choice == '1':
                    pass

                else:
                    print('Invalid choice..!!\nYou are Denied to Access !!')
                    break
        
    else:
        print('You have entered wrong password 3 times..\nYou are denied to access !!')
        # print('False')
        return False

# login funcion
def login():

    import mysql.connector as mc
    connection = mc.connect(host = 'localhost' , user = 'root' , password = '',database = 'rastauri_management')
    cursor = connection.cursor()


    user_id = input('Enter your User_id (email_id) : ')
    req_data_for_login = user_in_database(user_id,cursor)

    user_exist = req_data_for_login[0]    


    if user_exist:
        user_pswd_in_db = req_data_for_login[1]
        user_id = req_data_for_login[2]
        user_table = req_data_for_login[3]
        
        login_success = password_verification(user_pswd_in_db,cursor,connection)
        # return(login_success)
        if login_success:
            print('Login successful')
            return True, user_id , user_table    # user_id is email id

        else:
            return False,None,None
    else:
        print('SIGN-UP')
        return sign_up()

# to update or delete record in database
def record_updation(user_table,mail_id):
    import mysql.connector
    mycon=mysql.connector.connect(host="localhost",password="",user="root",database="RaStAuRi_Management")
    if mycon.is_connected()==False:
        print("Error connecting to database")
    cursor=mycon.cursor()
    if user_table.lower() == "rider_data":
        print("\nPress 1 for updating username")
        print("Press 2 for updating password")
        print("Press 3 for deleting account\n")
        choice=(input("Enter your choice:"))
        email_id=mail_id

        if choice=='1':
            new_name=input("Enter your name : ")
            cursor.execute("update rider_data set Rider_name='{}' where Email_id='{}'".format(new_name,email_id))
            print('\nYour username is updated...\n')
        elif choice=='2':
            new_password=input("Enter your new password : ")
            cursor.execute("update rider_data set Password='{}' where Email_id='{}'".format(new_password,email_id))
            print('\nYour password is updated...\n')
        elif choice=='3':
            cursor.execute("delete from rider_data where Email_id='{}'".format(email_id))
            print('\nYour Account is DELETED from the Rastauri Database...\n')
        else:
            print("Your choice is invalid")

        mycon.commit()
        return choice
        

    elif user_table.lower() == 'driver_data':
        print("\nPress 1 for updating username")
        print("Press 2 for updating password")
        print("Press 3 for updating Autorickshaw number")
        print("Press 4 for updating number of seats")
        print("Press 5 for updating luggage space")
        print("Press 6 for deleting account\n")
        choice=(input("Enter your choice:"))
        email_id=mail_id
        if choice=='1':
            new_name=input("Enter your name : ")
            cursor.execute("update driver_data set Autodriver_name='{}' where Email_id='{}'".format(new_name,email_id))
            print('\nYour username is Updated...\n')
        elif choice=='2':
            new_password=input("Enter your password : ")
            cursor.execute("update driver_data set Password='{}' where Email_id='{}'".format(new_password,email_id))
            print('Your Password is Updated...')
        elif choice=='3':
            new_no=input("Enter the registered number of your vehicle : ")
            cursor.execute("update driver_data set Autorickshaw_number='{}' where Email_id='{}'".format(new_no,email_id))
            print('\nYour registered vehicle number is updated...\n')
        elif choice=='4':
            new_no_seats=int(input("Enter the number of seats in your vehicle : "))
            cursor.execute("update driver_data set Number_of_seats={} where Email_id='{}'".format(new_no_seats,email_id))
            print('Your record is Upadated...')
        elif choice=='5':
            new_luggage=input("Does your vehicle have space for luggage(yes/no) : ")
            if new_luggage in ['yes','y','t','true']:
                new_luggage=1
            elif new_luggage in ['no','n','f','false']:
                new_luggage=0
            cursor.execute("update driver_data set Luggage='{}' where Email_id='{}'".format(new_luggage,email_id))
            print('Your record is Updated...')
        elif choice=='6':
            cursor.execute("delete from driver_data where Email_id='{}'".format(email_id))
            print('\nYour account is DELETED from the Rastauri Database../\n')
        else:
            print("Your choice is invalid")

        mycon.commit()
        return choice

# extract user data function
def extract_user_data(mail_id, user_table):
    import datetime
    import mysql.connector as mc
    connection = mc.connect(host = 'localhost' , user = 'root' , password = '',database = 'rastauri_management')
    cursor = connection.cursor()
    
    command = f" select * from {user_table} where Email_id = '{mail_id}'; "
    cursor.execute(command)
    user_data = []
    for records in cursor:
        for field_data in records:
            user_data.append(field_data)
            
    return user_data

#to input additional details from rider on the spot
def additional_data():
    no_of_seats=int(input("Enter the preferred number of seats you want in the autorickshaw:"))
    luggage=input("Do you have luggage with you?(yes/no):")
    destination=input("Enter your destination: ")
    time_of_arrival=input("Enter the time at which autorickshaw is required:")
    railway_station = input("At which railway station will you arrive : ")
    platform_no=int(input("Enter the platform number will you arrive:"))
    fuel_type=input("What is your preferred fuel type : ")
    data={"no_of_seats":no_of_seats , "luggage":luggage , "destination":destination , "time_of_arrival":time_of_arrival , "railway_station":railway_station , "platform_no":platform_no , "fuel_type":fuel_type}
    return data

# to consider if the time entered is 12am or 12 pm
def time_12am_12pm(clock):
    new_clock=''
    if clock.split(':')[0]=="12":
        new_clock = '00' + clock[2:]
    elif clock.split(':')[0]=="24":
        new_clock = "12" + clock[2:]
    else:
        new_clock=clock
    return new_clock
#to consider if the user has entered am or pm
def time_am_pm(time_12):
    time_12 = time_12.strip()
    time_in_pm = time_12[-2:].lower() == 'pm'
    time_list = list(map(int, time_12[:-2].split(':')))

    if time_in_pm and time_list[0] <= 12:
        time_list[0] += 12

    time = ':'.join(map(lambda x: str(x).rjust(2, '0'), time_list))
    return time
# to return the time in format of hh:mm:ss
def time_format(time):
    time = time_12am_12pm(time_am_pm(time))
    length=len(time)
    if length==1:
        time="0"+time+":"+"00"+":"+"00"
    elif length==2:
        time=time+":"+"00"+":"+"00"
    elif length==4:
        time=time+":"+"00"
    elif length==5:
        time=time+":"+"00"
    return time

# to change the time slot in which autorickshaw driver will be available everyday
def time_change(mail_id,user_table):
    import mysql.connector
    mycon=mysql.connector.connect(host="localhost",password="",user="root",database="RaStAuRi_Management")
    if mycon.is_connected()==False:
        print("Error connecting to database")

    cursor=mycon.cursor()

    pre_from_time = extract_user_data(mail_id, user_table)[8]
    pre_till_time = extract_user_data(mail_id, user_table)[9]

    print(f'''Your current availability time :
            1) From Time : {pre_from_time}
            2) Till Time = {pre_till_time}\n''')


    choice=input("Do you want to change the time for which you are available today?(yes/no) : ")
    if choice.lower() in ("yes","y"):
        from_time=input("Enter the time from which you will be available today:")
        actual_from_time=time_format(from_time)

        till_time=input("Enter the time till which you will be available today:")
        time2=time_format(till_time).split(':')
        # print(time2)
        if int(time2[0]) in range (0,13):
            time2[0]=str(int(time2[0])+24)
        elif int(time2[0]) in range (13,24):
            if int(time2[0]) <= int(actual_from_time.split(':')[0]):
                time2[0]=str(int(time2[0])+24)
            else:
                time2=time2
        else:
            print("invalid input")
    
        actual_till_time = ':'.join(time2)
        # print("from_time:",actual_from_time,"till_time:",actual_till_time)
        querry = f"update driver_data set From_time = '{actual_from_time}' , Till_time = '{actual_till_time}' where Email_id='{mail_id}'"
        # print(querry)
        cursor.execute(querry)
        mycon.commit()
        print('Your time of availability is updated...\n')

        pre_from_time = extract_user_data(mail_id, user_table)[8]
        pre_till_time = extract_user_data(mail_id, user_table)[9]

        print(f'''Your New availability time :
                1) From Time : {pre_from_time}
                2) Till Time = {pre_till_time}\n''')

    elif choice.lower() in ("no","n"):
        pass
    else:
        print("your choice is invalid")

# send_rider_data_to_driver function
def send_rider_data_to_driver(ad_data,mail_id, user_table,Driver_data):
    import math
    import random
    import smtplib
    # driver_mailid = 'tiwarishreeji@gmail.com'
    driver_mailid = Driver_data['Email_id']
    driver_name = Driver_data['Autodriver_name']
    digits="0123456789"
    code=""
    for i in range(6):
        code+=digits[math.floor(random.random()*10)]
    mssg = extract_user_data(mail_id, user_table)
    more_data = ad_data
    destination = more_data['destination']
    time_of_arrival = more_data['time_of_arrival']
    location = more_data['railway_station']
    platno = more_data['platform_no']
    
    message_to_be_sent = f"Hello {driver_name}\nWe have found one rider for you.\n\nHere is the rider details:\nRider Name :{mssg[0]}\nRider Phone Number :{mssg[2]}\nDestination :{destination}\nTime of Arrival :{time_of_arrival}\nRailway Station Name :{location}\nPlatform Number :{platno}\n\nYour Verification Code : {code}\n\nTHANK YOU\nTEAM RaStAuRi'"

    s = smtplib.SMTP('smtp.gmail.com', 587)
    s.starttls()
    s.login('rastauri.management@gmail.com','jfbs cxom ttbg olfm')
    # print(message_to_be_sent)
    s.sendmail('rastauri.management@gmail.com', driver_mailid, message_to_be_sent)
    print('Driver successfully selected !!')
    return code

# fetch_driver functions
def luggage_condition(ad_data):
    luggage = ad_data['luggage'].lower()
    if luggage in ['no','n']:
        return 'luggage in (1,0)' #agar luggage nhi bhi hai to luggage wali auto chalegi
    elif luggage in ['yes','y']:
        return 'luggage = 1'

def fuel_condition(ad_data):
    fuel_type = ad_data['fuel_type']
    if fuel_type.lower() == 'any':
        return ''
    else:
        return f"and fuel_type = '{fuel_type}'"

def time_condition(ad_data):
    time = time_format(ad_data['time_of_arrival'])
    new_time = time.split(':')
    new_time[0] = str(int(new_time[0])+24)
    new_time = ':'.join(new_time)
    time_condition = f"and  ('{time}' between from_time and till_time or'{new_time}' between from_time and till_time)"
    return time_condition

def fetch_driver(ad_data):
    
    
    import mysql.connector
    mycon=mysql.connector.connect(host="localhost",password="",user="root",database="RaStAuRi_Management")
    if mycon.is_connected()==False:
        print("Error connecting to database")
    cursor=mycon.cursor()


    SQL_querry = f"select Autodriver_name, Autorickshaw_number, Phone_number, Email_id, Number_of_seats, Fuel_Type  from driver_data where number_of_seats >= {ad_data['no_of_seats']} and {luggage_condition(ad_data)} {fuel_condition(ad_data)} {time_condition(ad_data)}"
    
    fields = ['Autodriver_name', 'Autorickshaw_number', 'Phone_number', 'Email_id', 'Number_of_seats', 'Fuel_Type']
    # print(fields)
    driver_data_list = []
    # print(SQL_querry)
    cursor.execute(SQL_querry)
    dct={}
    sno = 1
    for rec in cursor:
        dct['S.No'] = sno
        cnt=0
        for data in rec:
            dct[fields[cnt]] = str(data)
            cnt += 1
        driver_data_list.append(dct)
        dct={}
        sno+=1
        

    return driver_data_list    

def select_driver(ad_data):
    driver_data_list = fetch_driver(ad_data)
    print(f"\n\n{'S.No.':^4}  {'Autodriver_name':^30}  {'Autorickshaw_number':^19}  {'Phone_number':^16}  {'Email_id':^40}  {'Number_of_seats':^{len('Number_of_seats')}}  {'Fuel_Type':^30}")
    for dicts in driver_data_list:
        heading_list = list(dicts.keys())


    for rec in driver_data_list:
        print(f'{rec[heading_list[0]]:^4}  {rec[heading_list[1]]:^30}   {rec[heading_list[2]]:^19}  {rec[heading_list[3]]:^16}  {rec[heading_list[4]]:^40}  {rec[heading_list[5]]:^15}  {rec[heading_list[6]]:^30}')

    driver_no = int(input('\nEnter which driver you want to choose(only enter serial number) : '))
    selected_driver_details = driver_data_list[driver_no-1]
    
    return selected_driver_details

# Send driver data to rider
def send_driver_data_to_rider(rider_data,code,Driver_data):
    import math
    import random
    import smtplib

    # rider_mailid = 'tiwarishreeji@gmail.com'
    rider_mailid = rider_data[-1]
    rider_name = rider_data[0]

    driver_name = Driver_data['Autodriver_name']
    rickshaw_no = Driver_data['Autorickshaw_number']
    seats_avaiable = Driver_data['Number_of_seats']
    phone_number = Driver_data['Phone_number']
    fuel_type = Driver_data['Fuel_Type']
    
    
    message_to_be_sent = f"Hello {rider_name}\nWe have found one driver for you.\n\nHere is the driver details :\nDriver Name :{driver_name}\nDriver Phone Number :{phone_number}\nRickshaw number :{rickshaw_no}\nNumber of Seats available :{seats_avaiable}\nFuel Type : {fuel_type}\n\nYour Verification Code : {code}\n\nTHANK YOU\nTEAM RaStAuRi"

    s = smtplib.SMTP('smtp.gmail.com', 587)
    s.starttls()
    s.login('rastauri.management@gmail.com','jfbs cxom ttbg olfm')
    # print(message_to_be_sent)
    s.sendmail('rastauri.management@gmail.com', rider_mailid, message_to_be_sent)
    print('We have mailed you the details of driver that you have selected..')




