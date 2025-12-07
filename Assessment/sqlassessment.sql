create database assessment;
use assessment;
create table Salesman(salesman_id integer primary key, sales_name varchar(20), city varchar(20), comission float);
create table Customer(customer_id integer primary key, cust_name varchar(50), city varchar(20), grade int, salesman_id integer,
	foreign key(salesman_id) references Salesman(salesman_id));

insert into Salesman(salesman_id, sales_name, city, comission) values
(5001, "James Hoog", "New York", 0.15),
(5002, "Nail Knite", "Paris", 0.13),
(5005, "Pit Alex", "London", 0.11),
(5006, "Mc Lyon", "Paris", 0.14),
(5007, "Paul Adam", "Rome", 0.13),
(5003, "Lausen Hen", "San Jose", 0.12);


insert into Customer(customer_id, cust_name, city, grade, salesman_id) values 
	(3002, "Nick Rimando", "New York", 100, 5001),
	(3007, "Brad Davis", "New York", 200, 5001),
	(3005, "Graham Zusi", "California", 200, 5002),
	(3008, "Julian Green", "London", 300, 5002),
	(3004, "Fabian Johnson", "Paris", 300, 5006),
	(3079, "Geoff Cameron", "Berlin", 100, 5003),
	(3003, "Jozy Altidor", "Moscow", 200, 5007),
	(3001, "Brad Guzan", "London", 300, 5005);
    
select * from salesman;
select * from customer;

select cust_name,customer.city, comission from Customer, Salesman where customer.salesman_id = salesman.salesman_id;
SELECT 
    c.cust_name AS Customer_Name,
    c.city AS Customer_City,
    s.sales_name AS Salesman_Name,
    s.comission AS Commission
FROM Customer c
JOIN Salesman s
ON c.salesman_id = s.salesman_id
WHERE 
    s.comission BETWEEN 0.12 AND 0.15    
    AND c.grade IN (200, 300)             
    OR c.city = 'New York';               