

#include <iostream>
#include <cassert>

bool IsLeap(int year)
{
	assert(year > 0);
	bool flag;
	flag = !((year % 4 == 0 && year % 100 == 0 && year % 400 != 0) || year % 4 != 0);
	return flag;
}

//сколько секунд в минуте
int SecondsInMinute()
{
	return 60;
}

int main()
{

}
