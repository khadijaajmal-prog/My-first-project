#include <iostream>
using namespace std;

void p22(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " is divisible by: ";
    
    bool found = false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            found = true;
        }
    }

    cout << endl;

    if (found == false)
        cout << n << " is a Prime";
    else
        cout << n << " is a Composite";
}

int main() {
    p22();
    return 0;
}
