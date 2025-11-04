-- Question 1
-- Create a new database named school_db and a table called students with the following columns: student_id, student_name, age, class, and address.

create database school_db;
use school_db;

create table students(student_id int unique key, student_name varchar(50), age int NOT NULL, class varchar(50), address varchar(200));

-- Question 2
-- Insert five records into the students table and retrieve all records using the SELECT statement.

insert into students(student_id, student_name, age, class, address)
values
(1, "Rushi", 21, "10th", "Ahmedabad"),
(2, "Poonam", 21, "10th", "Ahmedabad"),
(3, "Sneh", 20, "11th", "Junagadh"),
(4, "Rushil", 22, "12th", "Jamnagar"),
(5, "Sara", 15, "9th", "Rajkot");

select * from students;

-- Question 3
-- Write SQL queries to retrieve specific columns (student_name and age) from the students table.

select student_name, age from students;

-- Question 4
-- Write SQL queries to retrieve all students whose age is greater than 10.

select * from students where age>20;

-- Question 5
-- Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).

create table teachers(
	teacher_id int primary key,
    teacher_name varchar(50) not null,
    subject_ varchar(10) not null,
    email varchar(30) unique);
    
-- Question 6
-- Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.
    
CREATE TABLE students1 ( student_id INT PRIMARY KEY, student_name VARCHAR(100), age INT, class VARCHAR(50), address VARCHAR(255), teacher_id INT, CONSTRAINT fk_teacher FOREIGN KEY (teacher_id) REFERENCES teachers(teacher_id));


-- Question 7
-- Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key.

CREATE TABLE courses ( course_id INT PRIMARY KEY, course_name VARCHAR(100), course_credits INT );


-- Question 8
-- Use the CREATE command to create a database university_db.

create database university_db;


-- Question 9
-- Modify the courses table by adding a column course_duration using the ALTER command.

ALTER TABLE courses ADD course_duration VARCHAR(50);


-- Question 10
-- Drop the course_credits column from the courses table.

ALTER TABLE courses DROP COLUMN course_credits;

-- Question 11
-- Drop the teachers table from the school_db database.

USE school_db; 
DROP TABLE teachers;

-- Question 12
-- Drop the students table from the school_db database and verify that the table has been removed.

DROP TABLE students;
show tables;

-- Question 13
-- Insert three records into the courses table using the INSERT command.

INSERT INTO courses (course_id, course_name, course_duration) VALUES (1, 'Computer Science', '4 years'), (2, 'Civil Engineering', '4 years'), (3, 'BBA', '3 years');

-- Question 14
-- Update the course duration of a specific course using the UPDATE command.

UPDATE courses SET course_duration = '4 years' WHERE course_id = 3;

-- Question 15
-- Delete a course with a specific course_id from the courses table using the DELETE command.

DELETE FROM courses WHERE course_id = 3;

-- Question 16
-- Retrieve all courses from the courses table using the SELECT statement.

SELECT * FROM courses;

-- Question 17
-- Sort the courses based on course_duration in descending order using ORDER BY.

SELECT * FROM courses ORDER BY course_duration DESC;






























