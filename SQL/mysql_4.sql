select *from product;
Alter table product add(chrr varchar(7000));

Alter table product modify chrr char(0); -- it can't be increase more than 255

Alter table product modify chrr varchar(7000);

desc product;

create table t1 as select *from product; -- copy or store data from another table 

select *from t1;

truncate table t1; -- remove data from table or all rows from table

-- Alter  is AutoCommit means can't be recover

Rollback;

Insert Into t1(select *from product); -- recover data of t1 from product
alter table products rename to product; -- renaming table name
select *from products;

RENAME table t1 to 1t2; -- renaming table name using rename DDL command


rename table 1f2 to t1;