#include <iostream>
using namespace std;
void p6()
{
	// operators
	// variable.
	
	float g = 9.8 ;
	
	
	//second equation of motion
	// s = vit + 1/2 at^2
	
	float s;
	int vi = 20;
	int a = 5;
	int t=10;
	cout <<"put the values of given eqution"<<endl;
	cout<< "	s = vi*t +  1.0/2 * a * t * t "<<endl;
	
	cout << "Enter vi ? ";
	cin >> vi;
	
	cout << "Enter a ? ";
	cin >> a ;
	
	cout << "enter t ? ";
	cin >> t;
	
	s = vi*t +  1.0/2 * a * t * t ;
	
	cout << "Distance is " << s<<"m" ;
	// int / int => int
	
	
	
	//operands
	
	
}

int main()
{
	p6(); //calling p4 to execute
}
