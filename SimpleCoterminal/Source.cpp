#include<iostream>
#include<string>
#include<conio.h> 
using namespace std;
int positiveCoterminal, negativeCoterminal, myPause();
float posCoterminals(), negCoterminals(), angle, angle2;
int main()
{
	cout << "Simple Coterminal Calculator" << endl;
	cout << "Press Enter To Continue" << endl;
	cin.ignore();
	cout << string(110, '\n');
	cout << "Enter An Angle (Degrees)" << endl;
	cin >> angle;
	angle2 = angle;
	cout << "\nHow Many Times Do You Wanna Add 360?" << endl;
	cin >> positiveCoterminal;
	cout << "\nList Of 360 Added " << "(" << positiveCoterminal << " Times)" << ":" << endl;
	for (int i = 0; i < positiveCoterminal; ++i) {
		cout << posCoterminals() << endl;
	}
	cout << "\nHow Many Times Do you Wanna Subtract 360?" << endl;
	cin >> negativeCoterminal;
	cout << "\nList Of 360 Subtracted " << "(" << negativeCoterminal << " Times)" << ":" << endl;
	for (int i = 0; i < negativeCoterminal; i++) {
		cout << negCoterminals() << endl;
	}
	myPause();
}
float posCoterminals()
{

	angle = angle + 360;
	return angle;
}
float negCoterminals()
{
	angle2 = (angle2 + (-360));
	return angle2;
}
int myPause()
{
	cout << "\nEnter Any Key To Close" << endl;
	_getch(); //leaves terminal open untill user inputs a key                           
	return 0;
}