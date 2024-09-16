//PF LAB 4 Q7
//Manak Hameed 24L-0773
#include<iostream>
using namespace std;
int main()
{
	int num, units, tens, hundreds, thousands, hundred, ten, unit,armstrongnum3;
	cout << "Enter number " << endl;
	cin >> num;


	thousands = num / 1000;
	hundred = num / 100;
	hundreds = hundred - thousands * 10;
	ten = num / 10;
	tens = ten - hundred * 10;
	unit = num / 1;
	units = unit - ten * 10;

	armstrongnum3 = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);
	if (armstrongnum3 == num)
		cout << "This is a armstrong number" << endl;
	else 
		cout << "This is  not a armstrong number" << endl;


	system("pause");
	return 0;




}