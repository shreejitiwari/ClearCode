fin = open("self_copy_maker.py" , 'r' )
file_data = fin.read()
file_name = fin.name.strip('.py')
fin.close()

print('This program will create its own copy in the current working directory..\n\n')
no_of_copy = int(input('How many copy of this python file you want : '))
for n in range(no_of_copy):
    copy_file_name = file_name + f'_copy({n+1}).py'
    
    with open(copy_file_name , 'w') as f :
        f.write(file_data)
        f.close()
    
    print(f'\n{copy_file_name} CREATED !!\n')
    
input('Press enter to exit !')

