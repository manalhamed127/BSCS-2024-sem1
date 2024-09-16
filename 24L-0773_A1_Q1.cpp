//Assignement-Q1
//Manal Hameed | 24L-0773

#include <iostream>
using namespace std;
int main()
{

	long long int subtotal, taxpercentage, servicechargesp;
	double  percentage1, percentage2, percentage3, percentage4,pkraslam,pkreesha,pkrihtesam,pkrmeera ;
	long int  grandtotal,totaltax;

	cout << "BILL SPLITTING CALCULATOR" << endl;

	cout << "enter the sub total amount"<<endl;
	cin >> subtotal;
	cout << "Enter the tax percentage"<<endl;
	cin >> taxpercentage;
	cout << "Enter the percentage of service charges"<<endl;
	cin >> servicechargesp;
	
	cout << "Enter your share of percentage (Aslam)" << endl;
	cin >> percentage1;
	cout << "Enter your share of percentage (Meera)" << endl;
	cin >> percentage2;
	cout << "Enter your share of percentage (IHtesam)" << endl;
	cin >> percentage3;
	cout << "Enter your share of percentage (Eesha)" << endl;
	cin >> percentage4;



	totaltax = (subtotal * taxpercentage/100) + subtotal*(servicechargesp/100);
	cout << "total tax is " << totaltax << endl;

	grandtotal = totaltax + subtotal;
	cout << "grand total is" << grandtotal << endl;

	pkraslam = percentage1/100 * grandtotal;
	cout<<"amount aslam has to pay" << pkraslam << endl;

	pkrmeera = percentage2/100 * grandtotal;
	cout << "amount meera has to pay" << pkrmeera << endl;

	pkrihtesam = percentage3/100 * grandtotal;
	cout << "amount ihtesam has to pay" << pkrihtesam << endl;

	pkreesha = percentage4 / 100 * grandtotal;
	cout << "amount eesha has to pay" << pkreesha << endl;


    system("pause");
	return 0;








}