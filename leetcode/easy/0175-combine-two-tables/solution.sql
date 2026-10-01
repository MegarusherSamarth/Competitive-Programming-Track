/* Write your PL/SQL query statement below */
select firstname, lastname, City, State
from Person P 
left join Address A on P.PersonId = A.PersonId;