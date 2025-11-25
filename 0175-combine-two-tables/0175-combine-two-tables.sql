select P.firstName,P.lastName,A.city,A.state
from Person p
left join Address A
on P.personId = A.personId;