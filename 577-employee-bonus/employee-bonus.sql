# Write your MySQL query statement below
select e.name,b.bonus
from Employee as e
left join  bonus as b
on e.empId = b.empId
where b.bonus is null ||b.bonus < 1000 ;
