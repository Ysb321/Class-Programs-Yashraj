create database class;

use class; 

# To create a table 
CREATE TABLE Product(
	PId int,
    PName varchar(20),
    Ptype varchar(20),
    price float,
    Qty int,
    Mdate date
);

# For checking format of table
select * from product;

#For Inserting table.

INSERT INTO Product
values(2, 'Dettol', 'Handwash', 53.5, 5500, sysdate());
INSERT INTO Product
values(3, 'Lays', 'Chips', 6.5, 2500, sysdate());
INSERT INTO Product
values(4, 'Fair and Handsome', 'fairness cream', 33.5, 6500, sysdate());