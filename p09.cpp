#include <iostream>
using namespace std;

void p9()
{
	/*
		Write a program that gets a 4 digit number
		print the number in reverse
		e.g. if the input is 2549
		output is 9452
	*/
	int n, d1, d2, d3, d4;
	// 1. get 4 digit number n
	cout << "Enter 4 digit number > ";
	cin >> n;
	// 2. set d1 -->  d1 =  n / 1000
	d1 = n / 1000;
	// 3. set d2 -->  d2 = n / 100 % 10
	d2 = n / 100 % 10;
	// 4. set d3 ---> d3 = ?
	d3 = n % 100 / 10 ;
	// 5. set d4 -->  d4 = ?
	d4 = n % 10;
	// print  d4 d3 d2 d1
	cout <<"first in reverse relation"<< endl;
		cout << d4 << d3 << d2 << d1 << endl;
	cout << "replace d4 to d1"<< endl;
	cout << d1 << d3 << d2 << d4 << endl;
	
}

int main ()
{
	p9(); //call to function p9
}
