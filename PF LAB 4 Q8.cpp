//PF LAB 4 Q8
//Manal Hameed 24L-0773
#include<iostream>
#include<Cmath>
using namespace std;
int main()
{
	char character;
	cout << "Enter a character" << endl;
	cin >> character;


	if (character>='a' && character <= 'z') 
        cout<< "The character is an alphabet." << endl;
     else 
       cout << "The character is a number." <<endl;
    
	system("pause");
	return 0;

}