// C++
class Person
{
private:
	std::string name;
	int age;
public:	
	void get_age() { return age;}
	void get_name(){ return name;}
};

// C#, Java
class Person
{
	private std::string name;
	private int age;

	public void         get_age() { return age;}
	public std::string  get_name(){ return name;}
};