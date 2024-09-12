-- Rename table name
Alter table products rename to product;

select* from product;

ALter Table product  modify(pname char(40));
ALter Table product  modify(pname char(20)); -- char is static so it won't decrease
Alter Table product  modify(pname varchar(40)); -- varchar is dynamic


ALter table products modify(expdate varchar(40));
select *from products;

desc product;

