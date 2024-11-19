-- primary key , unique key indexes is created by default
-- primary key is only one in table,

alter table y1 modify (name varchar(10) primary key); -- primary key apply only on column which contain non null values, non reapeted values, their should not another primary available in table 

create table y2(Employee_id number primary key, fname varchar(13) not null, job varchar(8) not null, G char(1) not null check (g IN('M', 'F', 'm', 'f')), sal Number(10,2));

alter table y2 modify sal number(10,2) check(sal>=8000000 and sal<=15000000); -- check use to put specific data inside a column

alter table y2 modify sal number(10,2) not null check(sal between 12000000 and 15000000);