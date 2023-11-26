/*to run this script use the following command in your sql prompt :
source <full_file_path_of_this_sql_script>
*/

create database if not EXISTS rastauri_management ;
use rastauri_management;

/*Creating tables*/

CREATE TABLE if not EXISTS Rider_data
(
Rider_name varchar(30) not null,
Password varchar(30) not null,
Phone_number varchar(15) primary key,
Email_id varchar(50) UNIQUE);


CREATE TABLE if not EXISTS Driver_data
(
Autodriver_name varchar(30) not null,
Autorickshaw_number varchar(30) UNIQUE,
Password varchar(30) not null,
Number_of_seats int not null,
Luggage boolean not null,
Phone_number varchar(15) primary key,
Email_id varchar(50) UNIQUE,
Fuel_Type varchar(30) DEFAULT 'Any',
From_time varchar(16) DEFAULT '09:00:00',
Till_time varchar(16) DEFAULT '00:00:00'
);



/* inserting rider_data */
insert into Rider_data values('Lovely', 'lovsh@27', '+917000305549', 'lovelysharma43276@gmail.com');
insert into Rider_data values('Aarohi', 'hello@123','+919741798970', 'aarohisinghxia@gmail.com');
insert into Rider_data values('Shreeji', '#cs_guru','+919516543571', 'tiwarishreeji@gmail.com');


/* inserting driver_data */
insert into Driver_data values('Chandu', 'MP 07 GH 5642', '#chandu_zindabaad', 4, 0, '+915632489812', 'chandu@gmail.com', 'CNG','05:00:00','17:00:00');
insert into Driver_data values('Deepak', 'MP 43 KL 1123', 'cool@cool', 4, 1, '+91cccccccccc', 'deepak.cool@gmail.com', 'Petrol','20:00:00','34:00:00');
insert into Driver_data values('Atul', 'MP 90 OL 6711', '#auto_wala', 4, 1, '+91kkkkkkkkkk', 'atul.autodriver@gmail.com', 'CNG','02:00:00','20:00:00');
insert into Driver_data values('Testing', 'MP 02 LI 3456', 'owner', 10, 1, '+91pppppppppp', 'proto.newoix@gmail.com', 'CNG','00:00:00','24:00:00');
insert into Driver_data values('Auto_wala', 'MP 23 UI 8574', 'shava_shava', 3, 0, '+91QQQQQQQQQQ', 'autowala@gmail.com', 'CNG','10:00:00','23:00:00');
insert into Driver_data values('Gabbar', 'MP 77 GB 0989', 'gabbar_is_back', 5, 1, '+91TTTTTTTTTT', 'gabbar_aa_jayega@gmail.com', 'Petrol', '06:00:00', '21:00:00');
insert into Driver_data values('Bhanu', 'MP 07 BD 5289', 'balle@balle', 5, 0, '+91xxxxxxxxxx', 'bhanudada@gmail.com', 'CNG', '09:00:00', '24:00:00');
insert into Driver_data values('Ramu_kaka', 'MP 98 CV 1009', 'budha_aadami@123', 4, 1, '+91YYYYYYYYYY', 'Ramu_kaka@gmail.com', 'CNG', '10:00:00', '22:00:00');
insert into Driver_data values('Paanifalana', 'MP 33 HJ 9832', 'station_mera_ghar', 4, 1, '+91ZZZZZZZZZZ', 'chal_auto_chalayen@gmail.com', 'Petrol', '05:00:00', '22:00:00');
