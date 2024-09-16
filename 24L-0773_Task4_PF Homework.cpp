//PF Homework Task 4
//Manal Hameed 24L_0773

#include<iostream>
using namespace std;
int main()
{
	
		int day, month, year,magicaldate,thousands,xyear,zyear;
		cout << "Enter the day" << endl;
		cin >> day;
		cout << "Enter the month" << endl;
		cin >> month;
		cout << "Enter the current year (Its should be a 4 digit number)" << endl;
		cin >> year;
        if (day < 0 || month < 0 || year < 0)
        {
            cout << "Enter a positive number" << endl;
            return 0;
        }

        if (month == 2)
        {
            if (day > 29)
            {
                cout << "Invalid Input" << endl;
                return 0;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                cout << "Invalid Input" << endl;
                return 0;
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day > 31)
            {
                cout << "Invalid Input" << endl;
                return 0;
            }
        }

        if (year < 1000 || year > 9999)
        {
            cout << "Invalid Input, please enter a 4-digit number" << endl;
            return 0;
        }

        cout << "Valid Input" << endl;

		thousands = year / 1000;
		xyear = 1000 * thousands;
		zyear = year - xyear;
	
		if (day * month == zyear)
		{
			cout << "This is a magical date" << endl;
		}

        system("pause");
		return 0;


	
}