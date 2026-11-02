#include <iostream>
using namespace std;
void p3()
{
	int obtainedMarks, total, z;
	// 1. Get obtained marks
	cout << "Obtained Marks ? ";
	cin >> obtainedMarks;
	
	// 2. Get Total Marks
	cout << "Total Marks ? ";
	cin >> total;
	
	// 3. calculate percentage
		z = obtainedMarks * 100 / total ;
	//     70/100
	// 4. display percentage
	cout << z;
}

int main()
{
	p3();
}
