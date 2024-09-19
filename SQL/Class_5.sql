-- drop to delete any database objects(table, function, procedure, trigger, view, constrains, packages, database)4

create table T2 as select *from product;

show tables; -- showing all table from database for mysql

select *from tab; -- show all tables name

drop table T1; -- delete structure as well as data

show recyclebin;

flashback table T1 to before drop;

-- 'delete' DML command one or more all rows from a table temporarly

delete from t1; -- delete data from table

rollback; -- it will rollback changes

show 

commit; -- commit the changes

rollback; -- it will not rollback changes

select *from tab;


