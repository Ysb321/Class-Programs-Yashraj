/*
    Unique Key DELETE
*/

-- Unique and Not Null is Primary key

-- Primary key is constraints apply on column then column will doesn't contain repeat values  also null values  

create table  student2(sid number primary key, fname varchar(10) unique not null, Adhar number unique not null); -- one table contain only one primary key
