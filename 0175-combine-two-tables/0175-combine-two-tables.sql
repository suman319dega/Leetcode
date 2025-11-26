select firstName, lastName, city, state from Person as P
left join Address as A on P.personId = A.personId;