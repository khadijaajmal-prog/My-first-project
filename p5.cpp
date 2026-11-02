#include <iostream>
using namespace std;
void p5()
{
	//     datatype variableName ; 
	// create a new variable ->
	//      variableName;
	
	int t = 10000; // t is a variable
	//value of variable can be changed 
	//during program execution
	cout << "Enter a number : ";
	cin >> t;
	/*  << stream extraction operator
		10 x 1 = ans(10x1)
		10 x 2 = ans(10x2)
		10 x 3 = ans(10x3) ....
	*/
	int i = 1;
	
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	cout << t << " x " << i << " = " << t * i << endl;
	i=i+1;
	
}

int main()
{
	p5(); //calling p4 to execute
}
