create database yash;

CREATE TABLE yash.Yashraj(
	ID int primary key,
    Name varchar(200),
    Address varchar(400),
	Description_all varchar(120)
);

insert into yash.Yashraj(ID, Name, Address, Description) values(22, 'Yashraj', 'Washim Maharastra', 'Web Developer');


SELECT *from yash.Yashraj;

use yash; 

show tables;

desc Yashraj; 

CREATE TABLE product(
    PId int,
    Pname varchar(15),
    Ptype varchar(15),
    Description varchar(40),
    price float, 
    Qty int,
    Mdate date
);

select *from product;

Insert INTO product
values(1,'Parle-G','Biscuit', 'G for Genius', 5.512, 1000, now());

Insert INTO product
values(2,'fair and lovely','cream', 'fairness cream', 16.44, 1200, now());

Insert INTO product
values(3,'Lays','Chips', 'testy hai', 8.512, 1000, now());

Insert INTO product
values(4,'Dettol','Handwash','Cleaning purpose', 19.512, 1000, now());



