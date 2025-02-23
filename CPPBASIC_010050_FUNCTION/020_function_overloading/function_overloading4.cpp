#include <string_view>

void register_user1(std::string_view name, 
					std::string_view email, int age = -1)
{
}

void register_user2(std::string_view name, 
					std::string_view email)
{
}					

void register_user2(std::string_view name, 
					std::string_view email, int age)
{
}					

int main()
{
	register_user1("john", "john@abc.com");
	register_user1("john", "john@abc.com", 33);

	register_user2("john", "john@abc.com");
	register_user2("john", "john@abc.com", 33);

}