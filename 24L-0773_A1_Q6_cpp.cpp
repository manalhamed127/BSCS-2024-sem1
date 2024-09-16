//Assignemnt 1-Q6
//Manal Hameed | 24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

	
	float flour,sugar,chocolatechips,cookies;
	cout << "enter the number of cookies you want to make" << endl;
	cin >> cookies;

	flour = cookies * 3 / 32;
	sugar = cookies * 1 / 32;
	chocolatechips = cookies * 1 / 2;

	flour = ceil(flour * 4) / 4;
	sugar = ceil(sugar * 4) / 4;
	chocolatechips = ceil(chocolatechips);


	cout << "the Ingredients are" << endl;
    cout << "the amount of flour you will need is" <<flour<<"cups"<< endl;
	cout << "the amount of sugar you will need is" <<sugar<<"cups"<< endl;
	cout << "the amount of chocolate chips you will need is " <<chocolatechips<<"ounce"<<endl;
	

	system("pause");
	return 0;


}

