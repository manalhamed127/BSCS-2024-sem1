//Task#7 PF homework
//Manal Hameed 24L-0773
#include<iostream>
using namespace std;
int main()
{
	char type, choice;
	double totalcostr, totalcostf, length, width, crowns, squareinch, cframe, crown, cardboard, glass, frame, r, f;


	cout << "Enter the length of the frame per inch" << endl;
	cin >> length;
	cout << "Enter the width of the frame per inch " << endl;
	cin >> width;
	cout << "Enter the type of frame you want --- r(regular) & f(fancy)" << endl;
	cin >> type;
	cout << "Do u want crowns Enter y for YES and n for NO" << endl;
	cin >> choice;

	if (choice == 'y')
	{
		cout << "Enter the number of crowns you want" << endl;
		cin >> crowns;
	}
	else if (choice == 'n') {
		cout << "O crowns" << endl;
	}

	cout << "Do you want customized colored frame? Enter y for YES, n for N0 " << endl;
	cin >> choice;


	if (choice == 'y') {
		cframe = 2 * (length + width) * 0.1;
	}
	else {
		cframe = 0;
	}

	squareinch = length * width;

	cframe = 2 * (length + width) * 0.1;
	r = 2 * (length + width) * 0.15;
	f = 2 * (length + width) * 0.25;


	cardboard = 0.02 * squareinch;
	glass = 0.07 * squareinch;
	crown = crowns * 0.35;


	totalcostr = cardboard + glass + crown + r + cframe;
	totalcostf = cardboard + glass + crown + f + cframe;
	if (type = r)
		cout << "The total cost is" << "$" << totalcostr << endl;
	else
		cout << "The total cost is" << "$" << totalcostf << endl;


	system("pause");
	return 0;


}