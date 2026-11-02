#include <iostream>
using namespace std;
void p2()
{
	// variable => syntax =>   datatype variableName
	int x; // x is an integer (numbers without decimal)
	float f; // f is a floating point number (decimal)
	char c ; // c is a character
	bool b ; // b is a boolean variable (True or False)
	
	float s=0;
	float vi=10;
	float t=4;
	float a=9;
//	s = vit + 1/2 at^2
	// required vi, t, a
	
	cout << "Enter vi ? ";
	cin >> vi;
	
	cout << "Enter a ? ";
	cin >> a ;
	
	cout << "enter t ? ";
	cin >> t;


	s = vi*t + 0.5 * a * t * t;
	cout << "Total Distance = " << s << "m";

	
	
}
int main()
{
	p2();
}
