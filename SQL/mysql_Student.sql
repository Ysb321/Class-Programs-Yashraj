Use class;
select *from student;

create table student
(
    Student_Id int,
    Student_Name varchar(20),
    Student_Surname varchar(20),
    Marks  float,
    Total_marks int,
    Grade char
);

Alter Table student Modify Marks float;

Insert Into student values(1, 'Trupti', 'Sardar', 99, 100, 'A');
Insert Into student values(2, 'Amit', 'Patil', 98, 100, 'A');
Insert Into student values(3, 'Hrushikesh', 'Salunke', 99, 100, 'A');
Insert Into student values(4, 'Ganesh', 'Khedkar', 100, 100, 'A');
Insert Into student values(5, 'Ram', 'Ragde', 91, 100, 'A');
Insert Into student values(6, 'Suyash', 'Gadekar', 95, 100, 'A');
Insert Into student values(7, 'Rohit', 'Patil', 97, 100, 'A');
Insert Into student values(8, 'Kartik', 'Shende', 94, 100, 'A');
Insert Into student values(9, 'Akanksha', 'Ban', 99, 100, 'A');
Insert Into student values(10, 'Yashraj', 'Boralkar', 80, 100, 'A');
Insert Into student values(11, 'Harshada', 'Kult', 98, 100, 'A');
