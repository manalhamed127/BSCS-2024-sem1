//project 5(BURGER)

#include<iostream>
using namespace std;
int main()
{
	cout << "MENU" << endl;
	cout << "Zinger:Rs 386.57" << endl;
	cout << "J&J Special Wrap: Rs 524.43" << endl;
	cout << "Fries: Rs 186.72" << endl;
	cout << "Large Kebab stuffed Pizza: Rs 2497.95" << endl;
	cout << "Regular drink: Rs 78.32" << endl;
	int number1, number2, number3, number4, number5;

	cout << "enter number of zinger you want to order";
	cin >> number1;
	cout << "enter number of J&J Special Wrap you want to order ";
	cin >> number2;
	cout << "enetr number of fries you want to order";
	cin >> number3;
	cout << "enter number of Pizza you want";
	cin >> number4;
	cout << "enter number of drinks you want";
	cin >> number5;

	

	float answer= (number1 * 386.57) + (number2 * 524.43) + (number3 * 186.72) + (number4 * 2497.95) + (number5 * 78.32);
	cout << "total is" << (number1 * 386.57) <<"+"<< number2 * 524.43<<"+" << number3 * 186.72 <<"+" <<number4 * 2497.95 <<"+"<< number5 * 78.32 << "="<<answer<<endl;
	float salestax = 0.16 * answer;
	cout << "salestax is" << salestax << endl;
	cout << "total bill is " << salestax <<"+"<<answer << endl;
	cout << "total bill =" << salestax+answer<<endl;
}