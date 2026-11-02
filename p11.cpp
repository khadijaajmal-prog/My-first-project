#include <iostream>
using namespace std;

void p12()
{
	float obt, tot;
	float pr;
	
	cout << "Enter obtained marks: ";
	cin >> obt;
	cout << "Enter total Marks : ";
	cin >> tot;
	pr =  obt / tot * 100;
	
	if ( pr >= 50 )
	{
		cout << "Pass" << endl;
		cout << "Well Done";
	}
	
	
	if ( pr < 50 )
	cout << "Fail" << endl;
	
}

int main()
{
	p12();
}
