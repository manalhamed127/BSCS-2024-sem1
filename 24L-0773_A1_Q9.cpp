//Assignment1-Q9
//Manal Hameed =24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int nyears;
	float percentage,esealevel,sealevel,decrease;
	cout << "Enter the current sea level" << endl;
	cin >> sealevel;
	cout << "Enter the expected percentage decrease in sea level each year" << endl;
	cin >> percentage;
	cout << "Enter the number of years" << endl;
	cin >> nyears;
	if (nyears < 10)
	{
		cout << "The number of years should be greater then 10 -- run the program again" << endl;
		return 0;
	}

	//A=P(1+R/N)POWER n*t
	esealevel = sealevel * pow(1 - percentage / 100, nyears);
	decrease = esealevel - sealevel;

	cout << "Expected sea level after" << nyears << "years=" << esealevel << endl;
	cout << "the expected decrease in sealevel after" << nyears << "is" << decrease << endl;

	system("pause");
	return 0;
}
