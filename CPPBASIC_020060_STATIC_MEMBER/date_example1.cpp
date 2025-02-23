
class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date(int year = 1, int month = 1, int day = 1)
		: year{year}, month{month}, day{day}  { }

	void set_month(int m) { if (m >= 1 && m <= 12) month = m;}
	int  get_month() const{ return month;}		
};

int main()
{
	Date today{2025, 3, 20};
}
