//project 7

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float radius,area;
	cout << "enter the radius of your circle";
	cin >> radius;
	area = 22 / 7 * pow(radius, 2);
	cout << "the area of the circle is " << area << endl;

    system("pause");
	return 0;
}