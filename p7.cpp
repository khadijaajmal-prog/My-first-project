


#include <iostream>
using namespace std;
void p7()
{
  /*
	write a program that 
	gets temperature in centigrate 
	
	and print in fahrenheight
	
	1.8 C = F - 32
	F = 1.8 C + 32
	F = 1.8*C+32
*/
	float c, f;  /// c & f two variables, store temperature
	//get temperature in centigrade -c
	cout << "Enter temeperature in Centigrade : ";
	cin >> c;
	//convert to fahrenheight
	f = 1.8*c+32;
	
	//cout << "Temeprature in Fahrenheight = " << f << endl;	
	cout << c << "C = " << f << "F";
}

int main()
{
	p7(); //calling p4 to execute
}
