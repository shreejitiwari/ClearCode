import random

students_file = 'students.txt'
fin = open(students_file,'r')

students_list = [student.strip() for student in fin]
weekdays = ['Monday (English)','Tuesday (Hindi)','Wednesday (English)','Thursday (Hindi)','Friday (English)','Saturday (Hindi)']
duty = ['Prayer','Pledge','Thought','News']

cnt = 0
for i in range(24):
    if i%4 == 0:
        print('\n','='*20,'\n')
        print(weekdays[cnt],' :\n')
        cnt += 1
    
    student = students_list[random.randrange(len(students_list))]
    print(duty[i%4],' : ',student)
