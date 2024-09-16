//Assignment-1-Q8
//Manal Hameed - 24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()

{
	int x1, x2, y1, y2,m,c,midpoint1,midpoint2;
	cout << "Enter the value of x1" << endl;
	cin >> x1;
	cout << "Enter the value of y1" << endl;
	cin >> y1;
	cout << "Enter the value of x2" << endl;
	cin >> x2;
	cout << "Enter the value of y2" << endl;
	cin >> y2;

	m = y2 - y1 / x2 - x1;
	cout << "the garient is " << m << endl;

	//y=mx+c   y-mx=c
	c = y1 - m * x1;
	cout << "the value of y-intercept" << c << endl;

	midpoint1 = x1 + x2 / 2;
	midpoint2 = y1 + y2 / 2;
	cout << "the midpoint is" << midpoint1 <<","<<midpoint2<< endl;

	system("pause");
	return 0;




	




}