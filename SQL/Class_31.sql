CREATE TABLE Customers (
 CustomerID INT PRIMARY KEY,
 Name VARCHAR(100) NOT NULL,
 Email VARCHAR(100) UNIQUE,
 Phone VARCHAR(15) NOT NULL,
 Address VARCHAR(255)
);
INSERT INTO Customers (CustomerID, Name, Email, Phone, Address)
VALUES (1, 'John Doe', 'john@example.com', '1234567890', '123 Elm St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(2, 'Jane Smith', 'jane@example.com', '0987654321', '456 Oak St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(3, 'Alice Johnson', 'alice@example.com', '1231231234', '789 Pine St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(4, 'Bob Brown', 'bob@example.com', '3213214321', '101 Maple St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(5, 'Carol White', 'carol@example.com', '4564564567', '202 Birch St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(6, 'David Green', 'david@example.com', '6546547654', '303 Cedar St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(7, 'Emma Harris', 'emma@example.com', '7897899876', '404 Spruce St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(8, 'Frank Moore', 'frank@example.com', '9879876789', '505 Willow St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(9, 'Grace Taylor', 'grace@example.com', '4561237890', '606 Ash St');

INSERT INTO Customers (CustomerID, Name, Email, Phone, Address) VALUES 
(10, 'Henry Martin', 'henry@example.com', '7894561230', '707 Fir St');

SELECT * from Transactions;


CREATE TABLE Accounts (
 AccountID INT PRIMARY KEY,
 CustomerID INT,
 AccountType VARCHAR(20) NOT NULL,
 Balance DECIMAL(10, 2) DEFAULT 0 CHECK (Balance >= 0),
 FOREIGN KEY (CustomerID) REFERENCES Customers(CustomerID) );
 
INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES (1, 1, 'Savings', 1500.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(2, 2, 'Checking', 2000.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(3, 3, 'Savings', 2500.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(4, 4, 'Checking', 3000.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(5, 5, 'Savings', 3500.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(6, 6, 'Checking', 4000.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(7, 7, 'Savings', 4500.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(8, 8, 'Checking', 5000.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(9, 9, 'Savings', 5500.00);

INSERT INTO Accounts (AccountID, CustomerID, AccountType, Balance)
VALUES 
(10, 10, 'Checking', 6000.00);

CREATE TABLE Transactions (
 TransactionID INT PRIMARY KEY,
 AccountID INT,
 tDate DATE NOT NULL,
 Amount DECIMAL(10, 2) NOT NULL CHECK (Amount >= 0),
 TransactionType VARCHAR(20) NOT NULL,
 FOREIGN KEY (AccountID) REFERENCES Accounts(AccountID) );

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES (1, 1, '01-JAN-2023', 500.00, 'Deposit');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(2, 2, '15-FEB-2022', 300.00, 'Withdrawal');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(3, 3, '20-MAR-2021', 450.00, 'Deposit');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(4, 4, '10-APR-2023', 700.00, 'Withdrawal');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(5, 5, '25-MAY-2022', 350.00, 'Deposit');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(6, 6, '30-JUN-2021', 800.00, 'Withdrawal');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(7, 7, '05-JUL-2023', 600.00, 'Deposit');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(8, 8, '10-AUG-2022', 400.00, 'Withdrawal');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(9, 9, '15-SEP-2021', 550.00, 'Deposit');

INSERT INTO Transactions (TransactionID, AccountID, tDate, Amount, TransactionType)
VALUES 
(10, 10, '20-OCT-2023', 250.00, 'Withdrawal');

alter table customers modify Name varchar(25);
alter table customers modify Email varchar(35);
alter table customers modify Address varchar(35);

alter table customers modify AccountID varchar(25);
alter table customers modify Email varchar(35);
alter table customers modify Address varchar(35);

alter table customers modify Name varchar(25);
alter table customers modify Email varchar(35);
alter table customers modify Address varchar(35);