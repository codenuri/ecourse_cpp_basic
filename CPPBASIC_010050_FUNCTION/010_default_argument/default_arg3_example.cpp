#include <print>

bool is_leap_year(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || 
		   (year % 400 == 0);
}

int days_in_month(int month, int year = -1 ) 
{
    static const int days[] = { 31, 28, 31, 30, 31, 30, 
								31, 31, 30, 31, 30, 31};

	if (month == 2 && year != -1 && is_leap_year(year)) 
		return 29; 

    return days[month - 1];
}

int main() 
{
	std::println("{}", days_in_month(1));	// 31	
	std::println("{}", days_in_month(2));	// 28
	std::println("{}", days_in_month(2, 2000)); // 29	
	
}
