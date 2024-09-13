select *from student;

desc product;

select *from product;

Alter table product add(chrr char(1));

Alter table product modify chrr varchar(4001);
Alter table product modify chrr char(401); -- maximum size of char is 4000, it can be decrease if it is emty

create table t1 as select *from product; -- copy or store data from another table 

select *from t1;

truncate table t1; -- remove data from table

-- Alter  is AutoCommit means can't be recover

Rollback;

Insert Into t1(select *from product); -- recover data of t1 from product

Alter Table t2 REname to t1 -- alter table name t2 to t1
RENAME t2 TO t1; -- renaming table name using rename DDL command

ALter table product add()