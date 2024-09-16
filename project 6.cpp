//project 6

#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	int number,sum,product,answer,power;
	float result;
	cout << "enter a 2 digit number" << endl;
	cin >> number;

	int tens = number / 10;
	int ones = number % 10;

	sum = tens + ones;
	cout << "sum is "<<sum<<endl;

	product = tens * ones;
	cout << "product is " << product << endl;

     answer = product - sum;
	 cout << "product-sum is = " << answer << endl;

		power = ones * tens;
		result=pow(answer, power);
		cout << "the result is " << result << endl;
	

	system("pause");
	return 0;
}









