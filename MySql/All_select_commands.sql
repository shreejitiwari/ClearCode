USE school;

/*SELECTION COMMANDS*/


/*simple SELECT*/
select * from ProtoS;
select emp_no,emp_name,salary from ProtoS;


/*SELECT with where clause*/
select department_id,emp_no,emp_name,salary from ProtoS where department_id = 1000;
select city,emp_no,emp_name,salary from ProtoS where city = 'Delhi';


/*IN & NOT IN*/
select emp_no,emp_name,salary,city from ProtoS where city in ('Delhi','Banglore');
select emp_no,emp_name,salary,city from ProtoS where city NOT in ('Delhi','Banglore');


/*comparison and logical*/
SELECT * from ProtoS WHERE salary>=100000;
SELECT * from ProtoS where emp_no <> 100000;
select emp_no,emp_name,salary from ProtoS where salary<=100000 and salary>=9000;
SELECT * from ProtoS where city='Delhi' and designation = 'CEO';
SELECT * from ProtoS where city='Delhi' or joining_date = '2021-4-25';
select * from ProtoS where NOT (city = 'Delhi');


/* DISTINCT */
SELECT DISTINCT(city) from protos;


/*BETWEEN AND*/
select emp_no,emp_name,salary from ProtoS where salary between 9000 and 100000;


/*ORDER BY*/
SELECT emp_no,emp_name,salary from protos ORDER by salary DESC;
SELECT emp_no,emp_name,salary from protos ORDER by salary ASC;


/*LIKE*/
SELECT * from protos WHERE emp_name like 'S%' ;
SELECT * from protos WHERE emp_name like '__i' ;
SELECT * from protos WHERE emp_name like '_h%' ;
SELECT * from protos WHERE emp_name like '__r%' ;
SELECT * from protos WHERE emp_name like '%r%' ;
SELECT * from protos WHERE emp_name like '%j_' ;
SELECT * from protos WHERE emp_name like '_______' ;
SELECT * from protos WHERE emp_name like '%i' ;
SELECT * from protos WHERE joining_date LIKE '%2016%' ;
SELECT * from protos WHERE joining_date LIKE '2016%' ;


/*GROUP BY COMMAND*/


/*COUNT*/
select count(emp_no) from protos;
select count(distinct city) from protos;
select city, count(emp_no) from protos group by city;
select joining_date , count(emp_no) as 'Number'  from protos group by joining_date;

select 
'Number of people joined on' , 
joining_date , 
count(joining_date) AS 'number'
from protos group by joining_date;


/*MAX*/
select max(salary) from protos;
select designation,joining_date ,max(salary) from protos group by joining_date ;
select designation,joining_date ,max(salary) from protos group by joining_date order by salary ;


/*MIN*/
select min(salary) from protos;
select designation,joining_date , min(emp_no) from protos group by joining_date ;
select designation,joining_date , min(emp_no) from protos where designation<>'CEO' group by joining_date ;


/*AVG*/
select avg(salary) from protos;
select designation,joining_date, avg(salary) from protos group by joining_date;


/*SUM*/
select sum(salary) from protos;
select joining_date, sum(salary) from protos group by joining_date ;