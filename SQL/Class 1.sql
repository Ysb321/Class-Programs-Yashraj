CREATE TABLE product(
    PId number,
    Pname varchar(15),
    Ptype varchar(15),
    Description varchar(40),
    price Number(5,2), --for storing fractional numbers, decimal number with up to 5 digits, 2 of which can be after the decimal point
    Qty Number,
    Mdate date
);

select *from tab; -- * means all rows and columns
select *from employees;
select * from product;
desc product;

--Inserting values in table
Insert INTO product
values(1,'Parle-G','Biscuit', 'G for Genius', 5.50, 1000, sysdate);

Insert INTO product
values(2,'Fair and Lovely','Cream', 'Fairness cream', 18.50, 1200, sysdate);

Insert INTO product
values(3,'Dettol','Handwash', 'Cleaning', 19.50, 1900, sysdate);
--for checking the format

select *from product;
