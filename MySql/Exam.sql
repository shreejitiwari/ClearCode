#CREATE DATABASE Exam;
USE Exam;

create table customer
(
SID integer not null primary key,
First_name varchar(30),
Last_name varchar(30)
);


create table orders
(
order_id integer primary key,
order_date date,
customer_sid integer,
amount integer,
foreign key(customer_sid) references customer(SID));

