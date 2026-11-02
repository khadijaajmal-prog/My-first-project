#include <iostream>
using namespace std;

void p11()
{
	/*comparison operator > , < , == equality
		not equal  != , >= greater or equal
		<= less than or equal
	  compare two values and always true (1)
	  or false (0)
	  
	  comparisons are used in condition	
		  */
	int x = 5;
	int y = 3;	
	cout << "x > y" <<  ( x > y ) << endl;
	cout << "x < y" <<  ( x < y ) << endl;	
	cout << "x == y" <<  ( x == y ) << endl;
	cout << "x != y" <<  ( x != y ) << endl;
	cout << "x >= y" <<  ( x >= y ) << endl;
	cout << "x <= y" <<  ( x <= y ) << endl;	
}
int main()
{
	p11();
}
