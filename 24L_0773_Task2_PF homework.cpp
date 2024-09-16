//PF Homework_Task2
//Manal Hameed 24L-0772
#include<iostream>
using namespace std;
int main()

{
    int day, month;
	cout << "Please enter the day from 1-7" << endl;
	cin >> day;

	if (day > 7 && day < 1)
	{
		cout << "Invalid input" << endl;
		return 0;
	}


	if (day == 1)
		cout << "monday" << endl;
	else if (day == 2)
		cout << "tuesady" << endl;
	else if (day == 3)
		cout << "wednesday" << endl;
	else if (day == 4)
		cout << "thursday" << endl;
	else if (day == 5)
		cout << "friday" << endl;
	else if (day == 6)
		cout << "saturday" << endl;
	else if (day == 7)
		cout << "sunday" << endl;
	


	cout << "Please enter the month from 1-12" << endl;
	cin >> month;

	if (month > 12 && month < 1)
	{
		cout << "Invalid input" << endl;
		return 0;
	}


	if (month == 1)
		cout << "January" << endl;
	else if (month == 2)
		cout << "February" << endl;
	else if (month == 3)
		cout << "March" << endl;
	else if (month == 4)
		cout << "April" << endl;
	else if (month == 5)
		cout << "May" << endl;
	else if (month == 6)
		cout << "June" << endl;
	else if (month == 7)
		cout << "July" << endl;
	else if (month == 8)
		cout << "August" << endl;
	else if (month == 9)
		cout << "September" << endl;
	else if (month == 10)
		cout << "October" << endl;
	else if (month == 11)
		cout << "November" << endl;
	else if (month == 12)
		cout << "December" << endl;
	

  system("pause");
  return 0;
	


}