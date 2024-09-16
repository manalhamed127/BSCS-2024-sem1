//Task#5 PF homework
//Manal Hameed 24L-0773
#include<iostream>
using namespace std;
int main()
{
	cout << "Mega Package (Subscription charges:599) "<< endl;
	cout << "Offnet Minutes: 1500 (1.5 rupee per minute will be charged for additional minutes)" << endl;
	cout << "on-net Minutes: 2500 (0.75 rupee per minute will be charged for additional minutes)" << endl;
	cout << "SMS: 700 (0.5 rupee per message will be charged for additional messages)" << endl;
	cout << "Mobile Data: 10 GB (8.5 rupee per GB will be charged for additional data usage)" << endl;
	cout << "" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "Supreme: (Subscription charges: 1199)" << endl;
	cout << "Offnet Minutes: 2000 (1.25 rupee per minute will be charged for additional minutes)" << endl;
	cout << "on-net Minutes: 3000 (0.65 rupee per minute will be charged for additional minutes)" << endl;
	cout << "SMS: 1000 (0.45 rupee per minute will be charged for additional minutes)" << endl;
	cout << "Mobile Data: 20 GB (6.5 rupee per GB will be charged for additional data usage)" << endl;
	cout << "" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Premium: (Subscription charges: 2500)" << endl;
	cout << "Offnet Minutes: Unlimited" << endl;
	cout << "on-net Minutes: Unlimited" << endl;
	cout << "SMS: Unlimited" << endl;
	cout << "Mobile Data: Unlimited" << endl;
	cout << "" << endl;
	cout << "----------------------------------------------------------------" << endl;

	
	int subscriptionCharges;
	int offnetmin, onnetmin, sms, mobiledata;

	cout << "Now, please enter your requirements:" << endl;
	cout << "Enter Offnet Minutes: ";
	cin >> offnetmin;
	if (offnetmin < 0 || offnetmin > 10080) {
		cout << "Invalid input. Offnet minutes should be in the range of 0 to 10,080. " <<endl;
	}

	cout << "Enter On-net Minutes: ";
	cin >> onnetmin;
	if (onnetmin < 0 || onnetmin > 10080) {
		cout << "Invalid input. On-net minutes should be in the range of 0 to 10,080." << endl;
	}

	cout << "Enter the number of SMS: ";
	cin >> sms;
	if (sms < 0) {
		cout << "Invalid input. SMS should be a positive integer. " << endl;
	}

	cout << "Enter Mobile Data: ";
	cin >> mobiledata;
	if (mobiledata < 0) {
		cout << "Invalid input. Mobile data should be a positive integer. " << endl;
	}

	double megacost = 599;
	double supremecost = 1199;
	double premiumcost = 2500;

	if (offnetmin > 1500) {
		megacost += (offnetmin - 1500) * 1.5;}
	if (onnetmin > 2500) {
		megacost += (onnetmin - 2500) * 0.75;}
	if (sms > 700) {
		megacost += (sms - 700) * 0.5;}
	if (mobiledata > 10) {
		megacost += (mobiledata - 10) * 8.5;}



	if (offnetmin > 2000) {
		supremecost += (offnetmin - 2000) * 1.25;}
	if (onnetmin > 3000) {
		supremecost += (onnetmin - 3000) * 0.65;}
	if (sms > 1000) {
		supremecost += (sms - 1000) * 0.45;}
	if (mobiledata > 20) {
		supremecost += (mobiledata - 20) * 6.5;}




	if (megacost <= supremecost && megacost <= premiumcost) {
		cout << "The Best package for you is Mega Package." << endl;}
	else if (supremecost <= megacost && supremecost <= premiumcost) {
		cout << "The Best package for you is Supreme Package." << endl;}
	else {
		cout << "The Best package for you is Premium Package." << endl;}




	system("pause");
	return 0;

}