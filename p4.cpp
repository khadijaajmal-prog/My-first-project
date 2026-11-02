#include <iostream>
using namespace std;
void p4()
{
	int t = 10000; // t is a variable
	//value of variable can be changed 
	//during program execution
	
	cout << "t before input " << t << endl;
	cout << "Enter number : ";
	cin >> t;
	/*  << stream extraction operator
		10 x 1 = ans(10x1)
		10 x 2 = ans(10x2)
		10 x 3 = ans(10x3) ....
	*/
	cout << t << " x " << 1 << " = " << t * 1 << endl;
	cout << t << " x " << 2 << " = " << t * 2 << endl;
	cout << t << " x " << 3 << " = " << t * 3 << endl;
	cout << t << " x " << 4 << " = " << t * 4 << endl;
	cout << t << " x " << 5 << " = " << t * 5 << endl;
	cout << t << " x " << 6 << " = " << t * 6 << endl;
	cout << t << " x " << 7 << " = " << t * 7 << endl;
	cout << t << " x " << 8 << " = " << t * 8 << endl;
	cout << t << " x " << 9 << " = " << t * 9 << endl;
	cout << t << " x " << 10 << " = " << t * 10 << endl;
		
	
	
}

int main()
{
	p4(); //calling p4 to execute
}
