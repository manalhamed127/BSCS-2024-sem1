//Assignment1=Q10
//Manal Hameed 24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int firstterm,lastterm,tterms,cdifference,sum;
	cout << "Enter the first term of the AP progression" << endl;
	cin >> firstterm;
	cout << "Enter the last term of the AP Progression" << endl;
	cin >> lastterm;
	cout << "Enter the total number of terms" << endl;
	cin >> tterms;
	if (tterms % 2)
	{
		cout << "total terms should be an odd number -- RUN the application again" << endl;
		return 0;
	}
	
	sum = (tterms/2)*(firstterm+lastterm);
    cout << "The sum of the AP progression is" << sum << endl;
	
	system("pause");
	return 0;











}