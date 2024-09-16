//PF LAB 3 - Q8
//Manal Hameed -24L-0773

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float GB,OS,availablememory,availablememory1,cache,availablememory2,storageleft;
	cout << "Enter the total storage capacity of your smart phone in GB" << endl;
	cin >> GB;
	if (GB < 128)
	{
		cout << "INVALID INPUT , please run this application again " << endl;
		return 0;
	}
	OS = GB * 0.3;//OS is operating system memory
	availablememory = GB - OS;//avaialblememory is total memory - Operating system memory
	availablememory1 = availablememory - 20.25;//availablememory1 is after videos data,20.25 gb used for videos.
	cache = 8.4;//70% of 12GB is 8.4
	availablememory2 = availablememory1 - cache;
	storageleft = availablememory2 - 24.56;
	if (storageleft > 16)
	{
		cout << "the available storage is" << storageleft << endl;
	}
	else
	{
		cout << "In sufficient memory, clear cache or insert memory card" << endl;
	}
	system("pause");
	return 0;







}