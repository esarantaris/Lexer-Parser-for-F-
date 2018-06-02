class test
begin


    private Int sa;
    public foo(int k)
    begin
    sa:=2*k;
    end

    Public foo( int k, int n)
    begin
    sa:=(2*k)*(n+12);
    end

    public int getSA()
    begin
    return sa;
    end

end//swsto




static void main()
begin

foo myclass;
myclass := new foo(45);

z:=myclass.z;

printf("%d",z);

end//swsto

