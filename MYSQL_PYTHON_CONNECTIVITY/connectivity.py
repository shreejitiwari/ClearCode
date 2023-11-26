import mysql.connector as mc
# connection = mc.connect(host = 'localhost', user ='root' , password='')
connection = mc.connect(host='localhost' , user = 'root' , password='', database= 'sql_connectivity')
cursor = connection.cursor()

number = int(input('How many records do you want to enter : '))
records_list = [{} for i in range(number)]  # it will create a list of dictionaries

cursor.execute('desc student')
fields = {rec[0]:rec[1] for rec in cursor}   # it will create a dictionary of field : datatype


for i in range(number):
    print(f'Enter data for record {i+1} :')
    for j in fields:
        records_list[i][j] = input(f'Enter {j} ( {fields[j]} ) : ')  # j key of ith indexed dictionary of records list will have the value entered in the input
        

    command = f'insert into student values {tuple(records_list[i].values())}'
    print(command)
    cursor.execute(command)
    connection.commit() #commit function to save data
    
    print(f'Record {i+1} entered\n')

# print(f'\n\n{cursor.rowcount} records affected in total .\n')
cursor.execute('select * from student;')
for rec in cursor:
    print(rec)
