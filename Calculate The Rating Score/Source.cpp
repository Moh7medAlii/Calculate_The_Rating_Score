#include <iostream>
using namespace std;

int main()
{
	float mark;
	cout << "Enter Your Total Mark: ";
	cin >> mark;

	if (mark > 100 || mark < 0)
	{
		cout << "Invalid Number" << endl;
	}
	else if (mark >= 85)
	{
		cout << "Excelent" << endl;
	}
	else if (mark >= 75)
	{
		cout << "Very Good" << endl;
	}
	else if (mark >= 65)
	{
		cout << "Good" << endl;
	}
	else if (mark >= 50)
	{
		cout << "Acceptable" << endl;
	}
	else if (mark >= 35)
	{
		cout << "Weak" << endl;
	}
	else
	{
		cout << "Very Weak" << endl;
	}
}
