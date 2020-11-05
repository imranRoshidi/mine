#include <iostream>
using namespace std;

class datetype
{
	public:
	/*	personType& setFirstName(string first);
		personType& personType::setLastName(string last){
		lastName=last;
		return *this;*/

	//	void setdate (int month, int day, int year);
		void setMonth(int month);
		void setDay(int day);
		void setYear(int year);
		void getdate (int &month, int &day, int &year);
		void printdate() const;
		bool leapyeartest(int year);
		datetype (int month=1, int day=1, int year=2020);
		
	private:
		int dmonth;
		int dday;
		int dyear;
};

void datetype::setMonth(int month)
{
	if (month>=0 && month<=12)
	dmonth = month;
}

void datetype::setDay(int day)
{
	if (day>=0 && day<=12)
	dday = day;
}

void datetype::setYear(int year)
{
	if (year>1000)
	dyear = year;
} 

/*
void datetype::setdate(int month, int day, int year)
{
	dmonth = month;
	dday = day;
	dyear = year;
}*/

void datetype::getdate(int &month, int &day, int &year)
{
	month = dmonth;
	day = dday;
	year = dyear;
}

void datetype::printdate() const
{
	cout << dmonth << "-" << dday << "-" << dyear << endl;
}

datetype::datetype(int month, int day, int year)
{
	setMonth(month);
	setDay(day);
	setYear(year);
}  

//leapyeartest(int year)
bool datetype::leapyeartest(int year)
{
	return (year%4==0);
}

//daysnumtest(int month, int year)
int datetype::daysnumtest(int month, int year)
{
	if (month==2)
	{
		if (obj.leapyeartest(year))
			result = 29;
		else
			result = 28;
	}
	else
	
	if (month>=1&&month<=7)
	{
		if (month%2==0)
			result = 30;
		else
			result = 31;
	}
}

int main()
{
	datetype obj;
	obj.printdate();
	
	int month, day, year;
	obj.getdate(month, day, year);
	cout << "Get date is: " << month << "-" << day << "-" << year << endl;
	
	if (obj.leapyeartest(year))
		cout << year << " is a leap year." << endl;
	else
		cout << year << " is not a leap year." << endl;
	
	
}
