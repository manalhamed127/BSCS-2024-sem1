//PF LAB 3 Q5
//Manal Hameed | Q5

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int integer1, integer2;
	cout << "enter integer 1" << endl;
	cin >> integer1;
	cout << "enter integer 2" << endl;
	cin >> integer2;

	if (integer1 > integer2)
	{
		cout << "in ascending order" << integer2 << "," << integer1 << endl;
	}

	if (integer1<integer2)
	{
	cout << "in descending order" << integer2 << "," << integer1 << endl;
	}
	system("pause");
	return 0;

}