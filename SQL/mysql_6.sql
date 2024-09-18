CREATE TABLE products (
    Id int,
    pName VARCHAR(20),
    QTY int,
    Price float
);

INSERT INTO products VALUES (1, 'Pears', 100, 15); 
INSERT INTO products VALUES (2, 'Lux', 200, 20.5);
INSERT INTO products VALUES (3, 'Fair and Lovely', 10, 150.75);

commit; 

Insert into product4 values(4, 'vico', 50, 25); -- temporary saved in table bcoz its not commit

Rollback; -- it will remove 4th row it will not work in mysql bcoz innodb
SELECT * FROM products;