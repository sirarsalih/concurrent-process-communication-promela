chan vw = [1] of {mtype};
chan xy = [1] of {mtype};

mtype = {a, b};

proctype A()
{
	vw!a; 
	xy?b;
}

proctype B()
{
	xy!b;
	vw?a;
}

init 
{ 
run A();
run B();

printf("a = %d\n", a);
printf("b = %d\n", b);
}