//Assignment1-Q3
//Manal Hameed | 24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

	float height, weight;
	double BSA,ans,drugdosage;

	cout << "Enter the patient's heigth in cm" << endl;
	cin >> height;
	cout << "Enter the patients's weight in kg" << endl;
	cin >> weight;

	ans = height * weight / 3600;
	BSA = pow(ans, 0.5);
	cout << "the patient's body surface area is" <<endl;
	cout << fixed << setprecision(2) << BSA;

	drugdosage=50 * BSA;
	cout << "the prescribed dug dosage for the patient is" << endl;
	cout << fixed << setprecision(3) << drugdosage<<"mg";




	system("pause");
	return 0;




}