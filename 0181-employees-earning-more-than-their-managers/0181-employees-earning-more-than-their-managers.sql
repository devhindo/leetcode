SELECT emp.name as Employee
FROM Employee emp
INNER JOIN Employee man
ON emp.managerId = man.id
WHERE emp.salary > man.salary;