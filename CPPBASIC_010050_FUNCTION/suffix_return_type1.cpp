int add1(int a, int b)      
{ 
	return a + b; 
}

auto add2(int a, int b)->int 
{ 
	return a + b; 
}

auto main()->int
{
	register_user("john", "good@codenuri.co.kr");
	register_user("john", "good@codenuri.co.kr", 33);
}
