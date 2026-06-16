mysql> USE Empolyees_DB
Database changed
mysql> CREATE TABLE Empolyees_1(emp_id INT PRIMARY KEY AUTO_INCREMENT,
    -> name VARCHAR(100) NOT NULL
    -> ^C
mysql>   CREATE TABLE  Empolyees(emp_id INT PRIMARY KEY AUTO_INCERMENT,
    -> name VARCHAR(100) NOT NULL,
    -> salary DECIMAL(10,2),
    -> is_active BOOLEAN,
    -> join_date DATE);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'AUTO_INCERMENT,
name VARCHAR(100) NOT NULL,
salary DECIMAL(10,2),
is_active BOOL' at line 1
mysql>   CREATE TABLE  Empolyees(emp_id INT PRIMARY KEY AUTO_INCREMENT,
    -> name VARCHAR(100) NOT NULL,
    -> salary DECIMAL(10,2),
    -> is_active BOOLEAN,
    -> join_date DATE);
Query OK, 0 rows affected (0.15 sec)

mysql> INSERT INTO Empolyees_1('AMAN', 500000.34, 'TRUE', 2025-01-25);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ''AMAN', 500000.34, 'TRUE', 2025-01-25)' at line 1
mysql> INSERT INTO Empolyees_1("AMAN", 500000.34, "TRUE" , 2025-01-25);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '"AMAN", 500000.34, "TRUE" , 2025-01-25)' at line 1
mysql> INSERT INTO Empolyees_1("AMAN", '500000.34', "TRUE" , 2025-01-25);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '"AMAN", '500000.34', "TRUE" , 2025-01-25)' at line 1
mysql> INSERT INTO Empolyees_1("AMAN", 500000.34, "TRUE" , 2025-01-25);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '"AMAN", 500000.34, "TRUE" , 2025-01-25)' at line 1
mysql> INSERT INTO Empolyees_1("AMAN", 500000.34, TRUE , '2025-01-25');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '"AMAN", 500000.34, TRUE , '2025-01-25')' at line 1
mysql> INSERT INTO Empolyees_1('AMAN', 500000.34, TRUE, '2025-01-25');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ''AMAN', 500000.34, TRUE, '2025-01-25')' at line 1
mysql> INSERT INTO Empolyees('AMAN', 500000.34, TRUE, '2025-01-25');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ''AMAN', 500000.34, TRUE, '2025-01-25')' at line 1
mysql> INSERT INTO Empolyees(ID, NAME, SALARY, TRUE/FALSE, DATE);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'TRUE/FALSE, DATE)' at line 1
mysql> INSERT INTO Empolyees(ID, NAME, SALARY, DATE);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 1
mysql> INSERT INTO Empolyees(ID, NAME, SALARY, TRUE/FALSE, DATE)
    -> VALUES ('AMAN', 50000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'TRUE/FALSE, DATE)
VALUES ('AMAN', 50000.45, TRUE, '2027-05-21')' at line 1
mysql> INSERT INTO Empolyees(ID, NAME, SALARY, TRUE/FALSE, DATE)
    -> VALUES (id, 'AMAN', 50000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'TRUE/FALSE, DATE)
VALUES (id, 'AMAN', 50000.45, TRUE, '2027-05-21')' at line 1
mysql> INSERT INTO Empolyees(ID, NAME, SALARY, TRUE/FALSE, DATE)
    -> VALUES (id, 'AMAN', 50000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'TRUE/FALSE, DATE)
VALUES (id, 'AMAN', 50000.45, TRUE, '2027-05-21')' at line 1
mysql> INSERT INTO Empolyees(emp_id, name, salary, is_active, join_date)
    -> VALUES ('AMAN', 50000.45, TRUE, '2027-05-21');
ERROR 1136 (21S01): Column count doesn't match value count at row 1
mysql> VALUES (1, 'AMAN', 50000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '(1, 'AMAN', 50000.45, TRUE, '2027-05-21')' at line 1
mysql> INSERT INTO Empolyees(emp_id, name, salary, is_active, join_date)
    -> VALUES (1, 'AMAN', 50000.45, TRUE, '2027-05-21');
Query OK, 1 row affected (0.01 sec)

mysql> SELECT * FROM Empolyees;
+--------+------+----------+-----------+------------+
| emp_id | name | salary   | is_active | join_date  |
+--------+------+----------+-----------+------------+
|      1 | AMAN | 50000.45 |         1 | 2027-05-21 |
+--------+------+----------+-----------+------------+
1 row in set (0.00 sec)

mysql> INSERT INTO Empolyees(emp_id, name, salary, is_active, join_date)
    -> VALUES ('RAM', 53000.45, TRUE, '2027-05-21');
ERROR 1136 (21S01): Column count doesn't match value count at row 1
mysql> VALUES (id, 'RAM', 53000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '(id, 'RAM', 53000.45, TRUE, '2027-05-21')' at line 1
mysql> VALUES ( ,'RAM', 53000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '( ,'RAM', 53000.45, TRUE, '2027-05-21')' at line 1
mysql> VALUES (id, 'RAM', 53000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '(id, 'RAM', 53000.45, TRUE, '2027-05-21')' at line 1
mysql> INSERT INTO Empolyees(emp_id, name, salary, is_active, join_date)
    -> VALUES ('RAM', 53000.45, TRUE, '2027-05-21');
ERROR 1136 (21S01): Column count doesn't match value count at row 1
mysql> INSERT INTO Empolyees(emp_id, name, salary, is_active, join_date)
    -> INSERT INTO Empolyees(name, salary, is_active, join_date)
    -> VALUES ('RAM', 53000.45, TRUE, '2027-05-21');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'INSERT INTO Empolyees(name, salary, is_active, join_date)
VALUES ('RAM', 53000.4' at line 2
mysql> INSERT INTO Empolyees(name, salary, is_active, join_date)
    -> VALUES ('RAM', 53000.45, TRUE, '2027-05-21');
Query OK, 1 row affected (0.01 sec)

mysql> SELECT * FROM Empolyees;
+--------+------+----------+-----------+------------+
| emp_id | name | salary   | is_active | join_date  |
+--------+------+----------+-----------+------------+
|      1 | AMAN | 50000.45 |         1 | 2027-05-21 |
|      2 | RAM  | 53000.45 |         1 | 2027-05-21 |
+--------+------+----------+-----------+------------+
2 rows in set (0.00 sec)

mysql> INSERT INTO Empolyees(name, salary, is_active, join_date)
    -> VALUES ('SAM', 103000.45, TRUE, '2027-05-21'),('RIYA', 40000.666, FALSE, '2027-03-13');
Query OK, 2 rows affected, 1 warning (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 1

mysql> SELECT * FROM Empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      1 | AMAN |  50000.45 |         1 | 2027-05-21 |
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
|      4 | RIYA |  40000.67 |         0 | 2027-03-13 |
+--------+------+-----------+-----------+------------+
4 rows in set (0.00 sec)

mysql>







Microsoft Windows [Version 10.0.26100.4652]                                                                                                         (c) Microsoft Corporation. All rights reserved.                                                                                                                                                                                                                                                         C:\Users\Asus> color 2                                                                                                                              
C:\Users\Asus>mysql -u root -p
Enter password: **********
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 54
Server version: 8.0.42 MySQL Community Server - GPL

Copyright (c) 2000, 2025, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> SHOW DATABASES
    -> ^C
mysql> SHOW DATABASES;
+--------------------+
| Database           |
+--------------------+
| empolyees_db       |
| information_schema |
| mysql              |
| performance_schema |
| school_db          |
| sys                |
+--------------------+
6 rows in set (0.23 sec)

mysql> USE empolyees_db
Database changed
mysql> DESC Empolyees
    -> -^C
mysql> DESC Empolyees_1;
ERROR 1146 (42S02): Table 'empolyees_db.empolyees_1' doesn't exist
mysql> DESC Empolyees;
+-----------+---------------+------+-----+---------+----------------+
| Field     | Type          | Null | Key | Default | Extra          |
+-----------+---------------+------+-----+---------+----------------+
| emp_id    | int           | NO   | PRI | NULL    | auto_increment |
| name      | varchar(100)  | NO   |     | NULL    |                |
| salary    | decimal(10,2) | YES  |     | NULL    |                |
| is_active | tinyint(1)    | YES  |     | NULL    |                |
| join_date | date          | YES  |     | NULL    |                |
+-----------+---------------+------+-----+---------+----------------+
5 rows in set (0.01 sec)

mysql> desc empolyees;
+-----------+---------------+------+-----+---------+----------------+
| Field     | Type          | Null | Key | Default | Extra          |
+-----------+---------------+------+-----+---------+----------------+
| emp_id    | int           | NO   | PRI | NULL    | auto_increment |
| name      | varchar(100)  | NO   |     | NULL    |                |
| salary    | decimal(10,2) | YES  |     | NULL    |                |
| is_active | tinyint(1)    | YES  |     | NULL    |                |
| join_date | date          | YES  |     | NULL    |                |
+-----------+---------------+------+-----+---------+----------------+
5 rows in set (0.01 sec)

mysql> select * from empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      1 | AMAN |  50000.45 |         1 | 2027-05-21 |
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
|      4 | RIYA |  40000.67 |         0 | 2027-03-13 |
|      5 | aman |  40000.67 |         1 | 2025-06-22 |
|      6 | aman |  40000.67 |         1 | 2025-06-22 |
+--------+------+-----------+-----------+------------+
6 rows in set (0.00 sec)

mysql> select * from empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      1 | AMAN |  50000.45 |         1 | 2027-05-21 |
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
|      4 | RIYA |  40000.67 |         0 | 2027-03-13 |
|      5 | aman |  40000.67 |         1 | 2025-06-22 |
|      6 | aman |  40000.67 |         1 | 2025-06-22 |
|      7 | aman |  40000.67 |         1 | 2025-06-22 |
|      8 | sam  |  30101.87 |         0 | 2025-08-28 |
|      9 | Jack |  97000.67 |         0 | 2025-09-15 |
+--------+------+-----------+-----------+------------+
9 rows in set (0.00 sec)

mysql>  ^C
mysql> CREATE TABLE STUDENTS;
ERROR 4028 (HY000): A table must have at least one visible column.
mysql> CREATE TABLE STUDENTS(Student_id INT PRIMERY KEY AUTO_INCERMENT,
    -> Name VARCHAR(50) NOT NULL,
    -> Class VARCHAR(50),
    -> Is_active BOOLEAN,
    -> Join_date DATE,
    -> City VARCHAR(100),
    -> Pin_code VARCHAR(20);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'PRIMERY KEY AUTO_INCERMENT,
Name VARCHAR(50) NOT NULL,
Class VARCHAR(50),
Is_ac' at line 1
mysql> CREATE TABLE STUDENTS(Student_id INT PRIMERY KEY AUTO_INCERMENT,
    -> ^C
mysql> CREATE TABLE STUDENTS(Student_id INT PRIMARY KEY AUTO_INCREMENT,
    -> Name VARCHAR(50) NOT NULL,
    -> Class VARCHAR(50),
    -> Is_active BOOLEAN,
    -> Join_date DATE,
    -> City VARCHAR(100),
    -> Pin_code VARCHAR(20);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '' at line 7
mysql> select * from students;
+------------+------+-------+-----------+------------+-------+----------+
| Student_id | Name | Class | Is_active | Join_date  | City  | Pin_code |
+------------+------+-------+-----------+------------+-------+----------+
|          1 | aman | 12th  |         0 | 2024-07-01 | Basti | 272130   |
+------------+------+-------+-----------+------------+-------+----------+
1 row in set (0.01 sec)

mysql> use empolyees_db
Database changed
mysql> update empolyees SET is_active = false
    -> where salary < 50000;
Query OK, 3 rows affected (0.02 sec)
Rows matched: 5  Changed: 3  Warnings: 0

mysql> select * from empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      1 | AMAN |  55000.00 |         1 | 2027-05-21 |
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
|      4 | RIYA |  40000.67 |         0 | 2027-03-13 |
|      5 | aman |  40000.67 |         0 | 2025-06-22 |
|      6 | aman |  40000.67 |         0 | 2025-06-22 |
|      7 | aman |  40000.67 |         0 | 2025-06-22 |
|      8 | sam  |  30101.87 |         0 | 2025-08-28 |
|      9 | Jack |  97000.67 |         0 | 2025-09-15 |
+--------+------+-----------+-----------+------------+
9 rows in set (0.00 sec)

mysql> update empolyees set salary = 75000,join_date = 2025-07-22 where name = 'jack';
ERROR 1292 (22007): Incorrect date value: '1996' for column 'join_date' at row 9
mysql> update empolyees set salary = 75000,join_date = 2025-07-22 where name = 'Jack';
ERROR 1292 (22007): Incorrect date value: '1996' for column 'join_date' at row 9
mysql> update empolyees set salary = 75000,join_date = 2025-07-22 where name = 'aman';
ERROR 1292 (22007): Incorrect date value: '1996' for column 'join_date' at row 1
mysql> update empolyees set salary = 75000,join_date = '2025-07-22' where name = 'aman';
Query OK, 4 rows affected (0.01 sec)
Rows matched: 4  Changed: 4  Warnings: 0

mysql> select * from empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      1 | AMAN |  75000.00 |         1 | 2025-07-22 |
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
|      4 | RIYA |  40000.67 |         0 | 2027-03-13 |
|      5 | aman |  75000.00 |         0 | 2025-07-22 |
|      6 | aman |  75000.00 |         0 | 2025-07-22 |
|      7 | aman |  75000.00 |         0 | 2025-07-22 |
|      8 | sam  |  30101.87 |         0 | 2025-08-28 |
|      9 | Jack |  97000.67 |         0 | 2025-09-15 |
+--------+------+-----------+-----------+------------+
9 rows in set (0.00 sec)






mysql> use empolyees_db
Database changed
mysql> desc user_data;
+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| id        | int         | YES  |     | NULL    |       |
| name      | varchar(50) | YES  |     | NULL    |       |
| age       | int         | YES  |     | NULL    |       |
| email_adr | varchar(30) | YES  |     | NULL    |       |
| city      | varchar(50) | YES  |     | NULL    |       |
| pin_code  | varchar(15) | YES  |     | NULL    |       |
| mobile_no | int         | YES  |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+
7 rows in set (0.02 sec)

mysql> select * from user_data;
+------+---------------+------+---------------------+---------+----------+-----------+
| id   | name          | age  | email_adr           | city    | pin_code | mobile_no |
+------+---------------+------+---------------------+---------+----------+-----------+
|  101 | Avinash Verma |   21 | av999860@gmail.com  | Basti   | 272130   |      9838 |
|  102 | Aman          |   22 | aman2160@gmail.com  | Ayodhya | 232140   |    983868 |
|  103 | Ankit         |   23 | ankit54@gmail.com   | Basti   | 276540   |    985432 |
|  104 | Ram           |   24 | ram54@gmail.com     | Gonda   | 223450   |     95454 |
|  105 | Timmy         |   26 | timmy324@gmail.com  | Ayodhya | 448931   |    543214 |
|  106 | Sam           |   25 | sam5865@gmail.com   | Basti   | 453212   |    876543 |
|  107 | Carl          |   28 | carl6543@gmail.com  | Gonda   | 324115   |    897042 |
|  108 | Shivam        |   31 | shivam744@gmail.com | Ayodhya | 778821   |    192314 |
|  109 | Shiv          |   30 | shiv7654@gmail.com  | Basti   | 662231   |    985764 |
|  110 | Jacson        |   29 | jrv8764@gmail.com   | Basti   | 223140   |    612341 |
+------+---------------+------+---------------------+---------+----------+-----------+
10 rows in set (0.01 sec)

mysql>  select * from users;
+---------+---------+----------------------+---------+------+
| user_id | name    | email                | city    | age  |
+---------+---------+----------------------+---------+------+
|     101 | Avinash | av999860@gmail.com   | Ayodhya |   24 |
|     102 | Aman    | aman860@gmail.com    | Ayodhya |   24 |
|     103 | Raj     | raj@gmail.com        | Ayodhya |   24 |
|     104 | Sam     | sam891@gmail.com     | Basti   |   24 |
|     105 | Sandeep | sandeep891@gmail.com | Gonda   |   22 |
|     106 | Tomy    | tomy22891@gmail.com  | Gonda   |   22 |
+---------+---------+-------       



Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 61
Server version: 8.0.42 MySQL Community Server - GPL

Copyright (c) 2000, 2025, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> use empolyees_db
Database changed
mysql> desc user_data;
+-----------+-------------+------+-----+---------+-------+
| Field     | Type        | Null | Key | Default | Extra |
+-----------+-------------+------+-----+---------+-------+
| id        | int         | YES  |     | NULL    |       |
| name      | varchar(50) | YES  |     | NULL    |       |
| age       | int         | YES  |     | NULL    |       |
| email_adr | varchar(30) | YES  |     | NULL    |       |
| city      | varchar(50) | YES  |     | NULL    |       |
| pin_code  | varchar(15) | YES  |     | NULL    |       |
| mobile_no | int         | YES  |     | NULL    |       |
+-----------+-------------+------+-----+---------+-------+
7 rows in set (0.02 sec)

mysql> select * from user_data;
+------+---------------+------+---------------------+---------+----------+-----------+
| id   | name          | age  | email_adr           | city    | pin_code | mobile_no |
+------+---------------+------+---------------------+---------+----------+-----------+
|  101 | Avinash Verma |   21 | av999860@gmail.com  | Basti   | 272130   |      9838 |
|  102 | Aman          |   22 | aman2160@gmail.com  | Ayodhya | 232140   |    983868 |
|  103 | Ankit         |   23 | ankit54@gmail.com   | Basti   | 276540   |    985432 |
|  104 | Ram           |   24 | ram54@gmail.com     | Gonda   | 223450   |     95454 |
|  105 | Timmy         |   26 | timmy324@gmail.com  | Ayodhya | 448931   |    543214 |
|  106 | Sam           |   25 | sam5865@gmail.com   | Basti   | 453212   |    876543 |
|  107 | Carl          |   28 | carl6543@gmail.com  | Gonda   | 324115   |    897042 |
|  108 | Shivam        |   31 | shivam744@gmail.com | Ayodhya | 778821   |    192314 |
|  109 | Shiv          |   30 | shiv7654@gmail.com  | Basti   | 662231   |    985764 |
|  110 | Jacson        |   29 | jrv8764@gmail.com   | Basti   | 223140   |    612341 |
+------+---------------+------+---------------------+---------+----------+-----------+
10 rows in set (0.01 sec)

mysql>  select * from users;
+---------+---------+----------------------+---------+------+
| user_id | name    | email                | city    | age  |
+---------+---------+----------------------+---------+------+
|     101 | Avinash | av999860@gmail.com   | Ayodhya |   24 |
|     102 | Aman    | aman860@gmail.com    | Ayodhya |   24 |
|     103 | Raj     | raj@gmail.com        | Ayodhya |   24 |
|     104 | Sam     | sam891@gmail.com     | Basti   |   24 |
|     105 | Sandeep | sandeep891@gmail.com | Gonda   |   22 |
|     106 | Tomy    | tomy22891@gmail.com  | Gonda   |   22 |
+---------+---------+----------------------+---------+------+
6 rows in set (0.01 sec)

mysql>  select * from empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
|      4 | RIYA |  40000.67 |         0 | 2027-03-13 |
|      5 | aman |  75000.00 |         0 | 2025-07-22 |
|      6 | aman |  75000.00 |         0 | 2025-07-22 |
|      7 | aman |  75000.00 |         0 | 2025-07-22 |
|      8 | sam  |  30101.87 |         0 | 2025-08-28 |
|      9 | Jack |  97000.67 |         0 | 2025-09-15 |
+--------+------+-----------+-----------+------------+
8 rows in set (0.01 sec)

mysql> delete from empolyees where is_active = false;
Query OK, 6 rows affected (0.05 sec)

mysql> select * from empolyees;
+--------+------+-----------+-----------+------------+
| emp_id | name | salary    | is_active | join_date  |
+--------+------+-----------+-----------+------------+
|      2 | RAM  |  53000.45 |         1 | 2027-05-21 |
|      3 | SAM  | 103000.45 |         1 | 2027-05-21 |
+--------+------+-----------+-----------+------------+
2 rows in set (0.00 sec)

mysql>  delete from empolyees;
Query OK, 2 rows affected (0.01 sec)

mysql>  insert into empolyees(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50))
    -> values(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  insert into empolyees(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50))
    -> values(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  insert into empolyees(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50));
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  insert into empolyees(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50));
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  create table costumer_data(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50));
Query OK, 0 rows affected (0.33 sec)

mysql> values(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India')' at line 1
mysql>  insert into empolyees(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50))
    -> values(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  insert into costumer_data(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50))
    -> values(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India');
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  insert into costumer_data(id int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, countary varchar(50));
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'int, name varchar(30), adderess varchar(50),city varchar(30), pin_code int, coun' at line 1
mysql>  insert into costumer_data(id, name, adderess ,city , pin_code, countary)
    -> values(101, 'Avinash Verma', 'Khamriya', 'Basti', 272130, 'India');
Query OK, 1 row affected (0.03 sec)

mysql> select * from costumer_data;
+------+---------------+----------+-------+----------+----------+
| id   | name          | adderess | city  | pin_code | countary |
+------+---------------+----------+-------+----------+----------+
|  101 | Avinash Verma | Khamriya | Basti |   272130 | India    |
+------+---------------+----------+-------+----------+----------+
1 row in set (0.00 sec)

mysql> select * from costumer_data;
+------+---------------+----------+-------+----------+----------+
| id   | name          | adderess | city  | pin_code | countary |
+------+---------------+----------+-------+----------+----------+
|  101 | Avinash Verma | Khamriya | Basti |   272130 | India    |
+------+---------------+----------+-------+----------+----------+
1 row in set (0.00 sec)

mysql> select * from costumer_data;
+------+---------------+----------+-------+----------+----------+
| id   | name          | adderess | city  | pin_code | countary |
+------+---------------+----------+-------+----------+----------+
|  101 | Avinash Verma | Khamriya | Basti |   272130 | India    |
+------+---------------+----------+-------+----------+----------+
1 row in set (0.00 sec)

mysql> select * from costumer_data;
+------+---------------+----------+-------+----------+----------+
| id   | name          | adderess | city  | pin_code | countary |
+------+---------------+----------+-------+----------+----------+
|  101 | Avinash Verma | Khamriya | Basti |   272130 | India    |
+------+---------------+----------+-------+----------+----------+
1 row in set (0.00 sec)

mysql> select * from costumer_data;
+------+---------------+----------+-------+----------+----------+
| id   | name          | adderess | city  | pin_code | countary |
+------+---------------+----------+-------+----------+----------+
|  101 | Avinash Verma | Khamriya | Basti |   272130 | India    |
+------+---------------+----------+-------+----------+----------+
1 row in set (0.00 sec)

mysql>  insert into costumer_data(id, name, adderess ,city , pin_code, countary)
    -> values(102, 'Sam Andresen', 'Town', 'Mixico', 21231, 'USE'),(103, 'Carl Mars', 'LosAngles', 66743, 'Mixco' );
ERROR 1136 (21S01): Column count doesn't match value count at row 2
mysql>  insert into costumer_data(id, name, adderess ,city , pin_code, countary)
    -> values(102, 'Sam Andresen', 'Town', 'Mixico', 21231, 'USE'),(103, 'Carl Mars', 'Brlin' 'LosAngles', 66743, 'Mixco' );
ERROR 1136 (21S01): Column count doesn't match value count at row 2
mysql>  insert into costumer_data(id, name, adderess ,city , pin_code, countary)
    -> values(102, 'Sam Andresen', 'Town', 'Mixico', 21231, 'USE'),(103, 'Carl Mars', 'Brlin', 'LosAngles', 66743, 'Mixco' );
Query OK, 2 rows affected (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql>  insert into costumer_data(id, name, adderess ,city , pin_code, countary)
    -> values(102, 'Sam Andresen', 'Town', 'Mixico', 21231, 'USE'),(103, 'Carl Mars', 'Brlin', 'LosAngles', 66743, 'Mixco' );
Query OK, 2 rows affected (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql>  insert into costumer_data(id, name, adderess ,city , pin_code, countary)
    -> values(102, 'Sam Andresen', 'Town', 'Mixico', 21231, 'USE'),(103, 'Carl Mars', 'Brlin', 'LosAngles', 66743, 'Mixco' );
Query OK, 2 rows affected (0.01 sec)
Records: 2  Duplicates: 0  Warnings: 0

mysql> select * from costumer_data;
+------+---------------+----------+-----------+----------+----------+
| id   | name          | adderess | city      | pin_code | countary |
+------+---------------+----------+-----------+----------+----------+
|  101 | Avinash Verma | Khamriya | Basti     |   272130 | India    |
|  102 | Sam Andresen  | Town     | Mixico    |    21231 | USE      |
|  103 | Carl Mars     | Brlin    | LosAngles |    66743 | Mixco    |
|  102 | Sam Andresen  | Town     | Mixico    |    21231 | USE      |
|  103 | Carl Mars     | Brlin    | LosAngles |    66743 | Mixco    |
|  102 | Sam Andresen  | Town     | Mixico    |    21231 | USE      |
|  103 | Carl Mars     | Brlin    | LosAngles |    66743 | Mixco    |
+------+---------------+----------+-----------+----------+----------+
7 rows in set (0.00 sec)

mysql>  select coloum 1,coloum 2 from costumer_data where city = Mixico and name = Carl Mars;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '1,coloum 2 from costumer_data where city = Mixico and name = Carl Mars' at line 1
mysql>  select coloum 1,coloum 2 from costumer_data where city = Mixico, and name = Carl Mars;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '1,coloum 2 from costumer_data where city = Mixico, and name = Carl Mars' at line 1
mysql>  select coloum 1,coloum 2 from costumer_data where city = Mixico and name = Carl Mars;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '1,coloum 2 from costumer_data where city = Mixico and name = Carl Mars' at line 1
mysql>
mysql>  select city,name from costumer_data where city = Mixico and name = Carl Mars;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'Mars' at line 1
mysql>  select city,name from costumer_data where city = Mixico and name = 'Carl Mars';
ERROR 1054 (42S22): Unknown column 'Mixico' in 'where clause'
mysql>  select city,name from costumer_data where city = 'Mixico', and name = 'Carl Mars';
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ', and name = 'Carl Mars'' at line 1
mysql>  select city,name from costumer_data where city = 'Mixico' and name = 'Carl Mars';
Empty set (0.00 sec)

mysql>  select * from costumer_data where city = 'Mixico' and name = 'Carl Mars';
Empty set (0.00 sec)

mysql>  select * from costumer_data where city = 'Mixico' and name = 'Sam Andresen';
+------+--------------+----------+--------+----------+----------+
| id   | name         | adderess | city   | pin_code | countary |
+------+--------------+----------+--------+----------+----------+
|  102 | Sam Andresen | Town     | Mixico |    21231 | USE      |
|  102 | Sam Andresen | Town     | Mixico |    21231 | USE      |
|  102 | Sam Andresen | Town     | Mixico |    21231 | USE      |
+------+--------------+----------+--------+----------+----------+
3 rows in set (0.00 sec)

mysql>  select city,name from costumer_data where city = 'Mixico' and name = 'Sam Andresen';
+--------+--------------+
| city   | name         |
+--------+--------------+
| Mixico | Sam Andresen |
| Mixico | Sam Andresen |
| Mixico | Sam Andresen |
+--------+--------------+
3 rows in set (0.00 sec)

mysql>  select city,name from costumer_data where city = 'Mixico' or name = 'Sam Andresen';
+--------+--------------+
| city   | name         |
+--------+--------------+
| Mixico | Sam Andresen |
| Mixico | Sam Andresen |
| Mixico | Sam Andresen |
+--------+--------------+
3 rows in set (0.00 sec)

mysql>  select city,name from costumer_data where city = 'Mixico' or name = 'Carl Mars';
+-----------+--------------+
| city      | name         |
+-----------+--------------+
| Mixico    | Sam Andresen |
| LosAngles | Carl Mars    |
| Mixico    | Sam Andresen |
| LosAngles | Carl Mars    |
| Mixico    | Sam Andresen |
| LosAngles | Carl Mars    |
+-----------+--------------+
6 rows in set (0.00 sec)

mysql>  select city,name from costumer_data where city not = 'Mixico' or name = 'Carl Mars';
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '= 'Mixico' or name = 'Carl Mars'' at line 1
mysql>  select city,name from costumer_data where city not = 'Mixico';
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '= 'Mixico'' at line 1
mysql>  select city,name from costumer_data where not city  = 'Mixico';
+-----------+---------------+
| city      | name          |
+-----------+---------------+
| Basti     | Avinash Verma |
| LosAngles | Carl Mars     |
| LosAngles | Carl Mars     |
| LosAngles | Carl Mars     |
+-----------+---------------+
4 rows in set (0.00 sec)

mysql>