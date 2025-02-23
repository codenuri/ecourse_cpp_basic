void call_by_pointer(int* p)  
{ 
	++(*p); 
}
void call_by_reference(int& r)
{	
	++r; 
}
int main()
{
	int a = 0;

	call_by_pointer(&a);
	call_by_reference(a);


	int* p = &a;
	*p = 10;

	int& r = a;
	r = 10;
}