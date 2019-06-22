# Duplicate Emails
* Write a SQL query to find all duplicate emails in a table named `Person`

### Person Table
| Id    | Email      |
|:-----:|:----------:|
| 1     | email1     |
| 2     | email2     |
| 3     | email3     |

### Output for above table
| Email      |
|:----------:|
| email1     |


```sql
SELECT Email FROM Person GROUP BY Email HAVING COUNT(*) > 1
```