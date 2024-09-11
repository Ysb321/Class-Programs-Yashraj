-- entering values in some columns
Insert Into product(pname, price, qty) values('fog', 223, 1220);

select *from product;

desc product

--Alter table table_name add(column_name Data_type);

Alter table product add(exdate Date);

desc product;

select *from product;

Alter table product add(brand varchar(20) default 'Honda');

desc product;

select *from product;

--Alter table table_name drop Column coumn_name;

Alter table product drop column exdate;

desc product;

select *from product;

-- to renaming column
-- Alter table table_name Rename old_column_name to new_column_name

Alter table product Rename column exdate To expdate;

desc product;

select *from product;

-- To change size of data type for a column
-- Alter Table table_name modify(column_name data_type(size));

Alter Table product modify ptype varchar(30);
Alter Table product modify ptype char(30); -- it changes datatype varchar to char

desc product;

select *from product;