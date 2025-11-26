select name as Customers from Customers as C
left join Orders as O on c.id = O.customerId
where O.customerId is NULL;