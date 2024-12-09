/*

Control statement or Decision Making in PL/SQL

If ELSE
If ElseIf
CASE
loop
While loop
For loop

syntax: IF ELSE
If CONDITION
THEN
--PL/SQL statement if true
ELSE
--PL/SQL statement if false
EndIF
*/
//////////////
Declare
N Number:= &N; -- = is assignment Operator
Begin
If mod(N,2) = 0 --  = is Comparision Operator
Then
Dbms_output.put_line(N||' is even');
Else
Dbms_output.put_line(N||' is odd');
End If;
End;
///////////////
Declare
N1 Number:= &N1;
N2 Number:= &N2;
N3 Number:= &N3;
Begin
If N1 > N2 AND N1 > N3
Then
Dbms_output.put_line(N1||' is Maximum');
ElsIf N2 > N3 AND N2 > N1
Then
Dbms_output.put_line(N2||' is Maximum');
Else
Dbms_output.put_line(N3||' is Maximum');
End If;
End;
///////////////////////////////
Declare
N1 Number:= &N1;
N2 Number:= &N2;
N3 Number:= &N3;
Begin
If N1 > N2 
Then
If N1 > N3
Then
Dbms_output.put_line(N1||' is Maximum');
Else 
Dbms_output.put_line(N3||' is Maximum');
End If;
ElsIf N2 > N3
Then
Dbms_output.put_line(N2||' is Maximum');
Else
Dbms_output.put_line(N3||' is Maximum');
End If;
End;
///////////////////////////
Declare
Num1 int:=12;
Num2 int:=22;
Begin
If Num1 > Num2
Then
Dbms_output.put_line(Num1||' is Bigger than ' ||Num2);
else
Dbms_output.put_line(Num2|| ' is Biger than ' ||Num1);
End If;
end;
//////////////////////////
