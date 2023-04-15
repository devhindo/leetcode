SELECT email FROM Person
group by email
having count(email) > 1;