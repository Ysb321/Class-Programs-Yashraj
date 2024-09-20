
-- DQL
create table emp as select *from product;

select *from emp where 1=1; -- filter the records according to data it will true it show all rows 
select *from emp where 1=2; -- filter the records according to data it will false

select *from emp where ptype = 'chips'; -- there is no problem if same as record uppercase or lowercase