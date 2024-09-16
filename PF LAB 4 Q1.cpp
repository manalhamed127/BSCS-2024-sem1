//Q1 PF LAB 4
//Manal Hameed 24l-0773
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, greatest;
	cout << "Enter number 1" << endl;
	cin >> num1;
	cout << "Enter number 2" << endl;
	cin >> num2;
	cout << "Enter number 3" << endl;
	cin >> num3;

	cout << "The entered number are" << num1 << "," << num2 << "," << num3 << endl;

	if (num1 > num2 && num1 > num3)
		if (num2 > num3)
			cout << "The sorted ascending order is" << num3 << "," << num2 << "," << num1 << endl;
	           	else if (num3>num2)
			         cout<< "The sorted ascending order is" << num2 << "," << num3 << "," << num1 << endl;



	if (num2 > num1 && num2 > num3)
		if (num1 > num3)
			cout << "The sorted ascending order is" << num3 << "," << num1 << "," << num2 << endl;
		else if (num3 > num1)
			cout << "The sorted ascending order is" << num1 << "," << num3 << "," << num2 << endl;


	if (num3 > num2 && num3 > num1)
		if (num2 > num1)
			cout << "The sorted ascending order is" << num1 << "," << num2 << "," << num3 << endl;
		else if (num1 > num2)
			cout << "The sorted ascending order is" << num2 << "," << num1 << "," << num3 << endl;

	system("pause");
	return 0;

}