create table product4(
    Id number,
    pName varchar(20),
    QTY number,
    Price number(8, 2)
);

Insert Into product4 values(1, 'Pears', 100, 15); 
Insert Into product4 values(2, 'Lux', 200, 20.5);
Insert Into product4 values(3, 'Fair and Lovely', 10, 150.75);

commit; -- save changes permanatly

Insert into product4 values(4, 'vico', 50, 25); -- temporary saved in table bcoz its not commit

Rollback; -- it will remove 4th row 
select *from product4;


