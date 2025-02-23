
class Date
{
private:
	int year;
	int month;
	int day;

	inline static constexpr int days[12] = 
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	

public:
	Date(int year = 1, int month = 1, int day = 1)
		: year{year}, month{month}, day{day}  { }

	void set_month(int m) { if (m >= 1 && m <= 12) month = m;}
	int  get_month() const{ return month;}		

	Date add_days(int ds) const 
	{
		Date tmp{year, month, day + ds };
		return tmp;
	}	
};

int main()
{
	const Date today{2025, 3, 20};
	Date d1 = today.add_days(1000);	
}
