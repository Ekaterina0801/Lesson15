

#include <iostream>
#include <cassert>

bool IsLeap(int year)
{
	assert(year > 0);
	bool flag;
	flag = !((year % 4 == 0 && year % 100 == 0 && year % 400 != 0) || year % 4 != 0);
	return flag;
}

string LaterInYear(int d1, int m1, int d2, int m2)
{
	string s = "";
	if (m1 == m2)
		if (d1 > d2)
			s = to_string(d1) + "." + to_string(m1);
		else
			s = to_string(d2) + "." + to_string(m2);
	else if (m1 > m2)
		s = to_string(d1) + "." + to_string(m1);
	else s = to_string(d2) + "." + to_string(m2);
	return s;
}

int DaysInYear(int year)
{
	if (IsLeap(year))
		return 366;
	else return 365;
}

int DaysInYearRange(int year1, int year2)
{
	int sum = 0;
	for (int i = year1; i <= year2; i++)
		sum += DaysInYear(i);
	return sum;
}

int main()
{

}
