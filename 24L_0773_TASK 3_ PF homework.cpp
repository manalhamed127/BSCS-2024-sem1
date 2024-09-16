//PF Homework Task 3
//Manal Hameed 24L-0773
#include<iostream>
using namespace std;
int main()

{
	int subscribers, watchtime, nvideos, views,likes,tviews;
	cout << "Checking whether your channel is monetized or not" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Enter the number of subscribers you have" << endl;
	cin >> subscribers;
	cout << "Enter the watch time in hrs in past 12 months" << endl;
	cin >> watchtime;
	cout << "Enter the number of videos you posted per month in the past year" << endl;
	cin >> nvideos;
	cout << "least number of views on each video" << endl;
	cin >> views;
	cout << "Enter the total views on each video you have posted" << endl;
	cin >> tviews;
	cout << "Enter the number of likes you have" << endl;
	cin >> likes;


	if (subscribers <= 1000 && watchtime <= 4000 && views <= 10 && likes < tviews * 0.40)
	{
		cout << "condition not fulfilled ";
		return 0;
	}
	


	if (subscribers >= 100000 && subscribers <= 1000000 && watchtime > 8000 && watchtime < 10000)
		{
			cout << "Channel is monetized and rewarded by Youtube with Silver play button" << endl;
		}
	else if(subscribers >= 1000000 && subscribers <= 10000000 && watchtime > 10000 && watchtime < 12000)
		{
			cout << "Channel is monetized and rewarded by Youtube with golden play button" << endl;

		}
	else if (subscribers >= 10000000 && watchtime > 12000)
		{
			cout << "Channel is monetized and rewarded by Youtube with diamond play button" << endl;
		}
	system("pause");
	return 0;
}