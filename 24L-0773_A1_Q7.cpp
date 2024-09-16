//Assignemnt-1_Q7
//Manal Hameed - 24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

	float length,uniformload,pointload,yieldstrength,Mmax,Vmax;
	cout << "please enter the length(L) of the beam in meters" << endl;
	cin >> length;
	cout << "please enter the uniform load(w) on the bram in KN/m" << endl;
	cin >> uniformload;
	cout << "please enter the point load applied in the center of the beam in KN" << endl;
	cin >> pointload;
	cout << "please enter the yield strength of the beam in (MPa)" << endl;
	cin >> yieldstrength;
	//Mmax=maximum bending moment 

	Mmax = (((uniformload * pow(length, 2)) / 8) + ((pointload * length) / 4));
	cout << "the maximum bending moment is" <<endl;
	cout << fixed << setprecision(2) << Mmax << "kN/m" << endl;

	//Vmax=maximum shear force

	Vmax = ((uniformload * length) / 2) + (pointload / 2);
	cout << "The maximum shear force is" <<endl;
	cout << fixed << setprecision(2) << Vmax<<"kN";





	system("pause");
	return 0;








}