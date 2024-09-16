//project 4

#include<iostream>
#include<CMATH>
using namespace std;
int main()

{

	float salary, pfund, gst, msalary, grosssalary, annualsalary, pfundannual;
	cout << ("Enter Your Monthly Salary : ");
	cin >> salary;

	pfund = salary * 0.05;
	gst = salary * 0.16;

	msalary = salary - pfund - gst;


	cout << ("After Gst And Provident Fund Monthly salary is : ") << msalary << endl;

	grosssalary = 12 * salary;
	annualsalary = 12 * msalary;

	cout << ("Gross annual Salary is : ") << grosssalary << endl;
	cout << ("Annual Salary is  : ") << annualsalary << endl;

	pfundannual = pfund * 12 * 2;
	cout << ("Provident Fund At the end of the year is  : ") << pfundannual << endl;




	system("pause");
	return 0;
}