create or replace function sp(INOUT x int,INOUT y int,INOUT z int) as'
begin
x:=x+y;
z:=x*y;
raise notice ''sum = %'',x;
raise notice''product = %'',z;
end;
'language'plpgsql';

