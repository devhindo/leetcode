SELECT c.name AS Customers
FROM Customers c
LEFT JOIN Orders o
ON o.customerId=c.id
WHERE o.CustomerId IS NULL;
