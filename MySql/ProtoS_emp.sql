#CREATE DATABASE
/*
CREATE DATABASE Shreeji
*/

#USE DATABASE 
/*USE Shreeji*/
use shreeji;


/*CREATING TABLE NAME ProtoS*/

CREATE TABLE ProtoS
(
emp_no int(6) primary key UNIQUE,
emp_name varchar(20),
city varchar(20) default 'Delhi',
designation varchar(35),
joining_date date,
salary int(6) check(salary>=5000),
department_id int(4)
);



/*INSERTING VALUES IN TABLE*/

insert into ProtoS(emp_no,emp_name,designation,joining_date)
values(100011,"Shreeji","CEO",'2004-03-24');

insert into ProtoS(emp_no,emp_name,designation,joining_date,city)
values(100012,"Amarmani","CMO",'2021-04-25','Balglore');

insert into ProtoS(emp_no,emp_name,designation,joining_date,city)
values(100013,"Shi","CTO",'2021-04-25','Chandigarh');

insert into ProtoS(emp_no,emp_name,designation,joining_date,city)
values(100014,"Ferrous","Executive assistant",'2016-06-25','Pune');

insert into ProtoS(emp_no,emp_name,designation,joining_date,salary)
values(100015,"Hit","Business analyst",'2021-04-25',150000);

insert into ProtoS(emp_no,emp_name,designation,joining_date,salary)
values(100016,"Arsh","Administrative assistant",'2021-04-25',100000);

insert into ProtoS
values(100017,"Vam",'Kolkata',"Project manager",'2021-04-25',10000,1000);

insert into ProtoS(emp_no,emp_name,designation,joining_date,salary)
values(100018,"Eita","Marketing specialist",'2021-04-25',40000);

INSERT INTO protos(emp_no,emp_name,designation,joining_date,salary)
VALUES(100019,'Udayan','Accountant','2021-04-25',30000);

insert into ProtoS(emp_no,emp_name,designation,joining_date,city,salary,department_id)
values(100020,"Lily","Accountant",'2021-04-25','Kochin',30000,NULL);



/*UPDATING TABLE*/
update protos set salary = 5000000 where designation = 'CEO';
update protos set salary = 1000000 where designation = 'CMO';
update protos set salary = 500000 where designation = 'CTO';
update protos set salary = 200000 , department_id = 1000 where designation = 'Executive assistant';
update protos set salary = salary + 20000 where emp_name = 'Vam';


/*ALTER TABLE */
ALTER table protos add Gender varchar(1) ; #adding column
alter table protos modify salary int(10);
alter table protos CHANGE joining_date joining_date date ;
alter table protos drop Gender;


select * from ProtoS


#TRUNCATE ProtoS
#DROP ProtoS
/*
DROP DATABASE Temp
*/
