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

	static int days_in_month(int m, int y = -1)
	{
		return days[m-1];
	}	
};

int main()
{
	int d1 = Date::days_in_month(5);

	int d2 = Date::days_in_month(2);
	int d3 = Date::days_in_month(2, 2000);	

}

