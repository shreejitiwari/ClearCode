use dbms_lab;

CREATE TABLE orders
(
    orderID int(5),
    customerID varchar(10),
    quantity int(5),
    price int(6)
);


INSERT INTO orders VALUES(1001, 1, 3, 300);
INSERT INTO orders VALUES(1001, 2, 5, 500);
INSERT INTO orders VALUES(1002, 3, 3, 300);
INSERT INTO orders VALUES(1003,4, 3, 300);
INSERT INTO orders VALUES(1004, 5, 7, 700);
INSERT INTO orders VALUES(1001, 6, 3, 300);
INSERT INTO orders VALUES(1002, 7, 3, 300);
INSERT INTO orders VALUES(1001, 8, 3, 300);
INSERT INTO orders VALUES(1004, 9, 3, 300);
INSERT INTO orders VALUES(1005, 10, 3, 300);