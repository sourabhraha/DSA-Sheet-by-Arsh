/* Write your PL/SQL query statement below */

select Max(salary) AS SecondHighestSalary from Employee 
    where salary != (select Max(salary) from Employee);