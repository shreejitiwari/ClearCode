print("Hello, this python file is made by another python program .\nIsn\'t its amazing ?!!!\n")
print("Here is the program written by that python program : ") 
fout = open(r'my programs\My_IPYNB_file_folder\new_line_file.txt' , 'a')
record = input('What do you want to write in the file : ').split('.')

new_rec = ''

for line in record[0:len(record)] :
    if bool(line) :
        new_rec += line.strip()+'.\n'


fout.write(new_rec)
fout.close()