
-- Rules and requlation is to validate to data applied on tables

-- Domain Constraints
--Default
--Not NULL (is only column level constraints)
--CHECK

--Entity Constraints
--UnIQUE key 
--PRIMARY key

--Entity Integrety Constraints
--Foreign Key

create table person(PId Number DEFAULT 1, Name varchar(10) NOT NULL); -- default is use when we not inserted any value in column, not null will allow to insert only not null values

create table person(PId Number UNIQUE, Name varchar(10) NOT NULL); -- UNIQUE will not allow user to put same values inside column

Insert Into person(PId) values(13);

Alter table person modify (name varchar(10) NOT NULL);

-- update table_name set column_name = value where condition

update employees set last_name = 'De_Haan' where employee_id = 102;

update employees set last_name = 'De_Haan'; -- it will update all rows values of last_name column