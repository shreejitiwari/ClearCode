/*CREATE DATABASE*/
create DATABASE shreeji;

/*using database*/
use shreeji
/*use school;*/


/*creating table*/

 create table student
 (
 Number int(2) primary key,
 Name varchar(10),
 Age int(2),
 Department varchar(10),
 Date_of_adm date,
 Fee int(3),
 Sex char(1)
 );
 
 
 
 /*Inserting VALUES */
 
insert into student
values(1 , 'Pankaj', 24, 'Computer', '1997/01/10', 120, 'M' );
	
	
insert into student
values(2 , 'Shalini', 21, 'History', '1998/03/24', 200, 'F' );
	
	
insert into student
values(3 , 'Sanjay', 22, 'Hindi', '96/12/12', 300, 'M' );
	
	
insert into student
values(4 , 'Sudha', 25, 'History', '99/07/01', 400, 'F' );
	
	
insert into student
values(5 , 'Rakesh', 22, 'Hindi', '97/09/05', 250, 'M' );
	
	
insert into student
values(6 , 'Shakeel', 30, 'History', '98/06/27', 300, 'M' );
	
	
insert into student
values(7 , 'Surya', 34, 'Computer', '97/02/25', 210, 'M' );	
	
	
insert into student
values(8 , 'Shikha', 23, 'Hindi', '97/07/31', 200, 'F' );



/*QUESTIONS*/


/*COMMANDS (a) TO (f)*/

/*(a) To show all information about the students of History department*/
select * from student where department = 'History';

/*(b) To list the names of female students who are in hindi department*/
select Name from student where department = 'Hindi' and sex = 'F';

/*(c) To list names of all students with their date of admission in ascending order*/
select Name,date_of_adm from student order by date_of_adm;

/*(d) To display student's name, fee , age for male students only*/
select name,fee,age from student where sex = 'M';

/*(e) To count number of students with age < 23*/
select count(name) from student where age < 23;

/*(f) Insert new row in the table*/
insert into student
values(9, 'Zaheer', 36, 'Computer', '97/03/12', 230, 'M');



/*(g)*/

/*
(i) select count(DISTINCT department) from student; 
3

select max(age) from student where sex = 'F';
25

Select avg(fee) from student where date_of_adm < {01/01/98};
218.3333

Select SUM(fee) from student where date_of_adm < {01/01/98};
1310

*/


/*final TABLE*/
SELECT * from student;

/*Describe TABLE*/
DESC student