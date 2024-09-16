//Assignment1-Q2
//Manal Hameed | 24L-0773

#include<iostream>
#include<iomanip>

using namespace std;
void main()

{
	long double g,radius,mass;

	cout << "Enter the mass of the planet" << endl;
	cin >> mass;
	cout << "Enter the radius of the planet"<<endl;
	cin >> radius;

	g = (6.67*mass)/ (radius*radius);



    cout << "gravitional field strength is "<<endl;
	cout << fixed << setprecision(2) << g;



	system("pause");
	
	








}