Create Function SP(INOUT x int, INOUT y int) as'
begin
x:= x+y;
y:= x*y;
END;
'language'plpgsql';
