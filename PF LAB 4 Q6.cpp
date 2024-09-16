//PF LAB 4 Q6
//Manal Hameed 24L-0773
#include<iostream>
#include<Cmath>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter number 1" << endl;
	cin >> num1;
	cout << "Enter number 2" << endl;
	cin >> num2;
	cout << "Enter the number 3" << endl;
	cin >> num3;



	if (num1 > num2 && num2 > num3)
		cout << num1 << "  " << num2 << "   " << num3 << "    " << "In Order" << endl;
	else
		cout << num1 << "  " << num2 << "   " << num3 << "    "<< "Not in order" << endl;


	system("pause");
	return 0;
}