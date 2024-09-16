//Assignment 1-	Q5
//Manal Hameed | 24L-0773

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()

{
	float coffeeprice,dailyrevenue,revenue1,revenue2;
	int cphdpt,phpd,cphdnpt,nphd,totalcustomers;

	cout << "Enter the average price of a coffee drink in $" << endl;
	cin >> coffeeprice;
	cout << "Enter the expected number of customers per hour during peak times" << endl;
	cin >> cphdpt; // customers per hour during peak time 
	cout << "Enter the number of peak hours per day" << endl;
	cin >> phpd;// peak hours per day 
	cout << "Enter the expected number of customers per hour during non-peak time" << endl;
	cin >> cphdnpt;// customers per hour during non peak time
	cout << "Enter the numnber of non-peak hours per day" << endl;
	cin >> nphd;// number of non peak hours per day 

	revenue1 = cphdpt * phpd * coffeeprice;
	cout << "The percentage of revenue earned during peak time is " << endl;
	cout << fixed << setprecision(1) << revenue1 << "$" <<endl;

	revenue2 = cphdnpt * nphd * coffeeprice;
	cout << "The percentage of revenue earned during non-peak time is " << endl;
	cout << fixed << setprecision(1) << revenue2 << "$" << endl;


    totalcustomers = cphdpt * phpd + cphdnpt * nphd;
	dailyrevenue = totalcustomers * coffeeprice;
	cout << "the projected daily revenue is " <<endl;
	cout << fixed << setprecision(0) << dailyrevenue << "$" << endl;

	system("pause");
	return 0;

}