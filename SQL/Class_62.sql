/*
 Exception Cursor in PL/SQL

 steps to use cursor in PL/SQL

 1) DECLARE CURSOR
 2) OPEN CURSOR
 3) FETCH data from cursor until data is available.
 4) close the cursor


*/

-- when we have to put multiple values in variable then use cursor
-- Cursor While Loop
DECLARE
Cursor c1 is Select * from employees where department_id =80;
emprec c1%rowtype;
BEGIN
Open c1;
Fetch c1 into emprec;
while c1%found
Loop
dbms_output.put_line(emprec.employee_id||' ' || emprec.first_name || ' ' || emprec.job_id);
Fetch c1 into emprec;
END LOOP;
dbms_output.put_line(c1%ROWCOUNT || ' Row Selected');
Close c1;
end;
/
//////////////////////////////
EXCEPTIONS
CURSOR_ALREADY_OPEN
INVALID_CURSOR
OTHERS
/////////////////////////////
-- Cursor For Loop

DECLARE
Cursor c1 is Select * from employees where department_id =80;
cnt number:=0;
BEGIN
dbms_output.put_line('Cursor for-loop to display Records');
for  emprec in c1
Loop
dbms_output.put_line(emprec.employee_id||' ' || emprec.first_name || ' ' || emprec.job_id);
cnt:=c1%rowcount;
END LOOP;
dbms_output.put_line(cnt || ' Row Selected');
end;
/

//////////////////