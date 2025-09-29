// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a > 0)
        cout << "Number is Positive" << endl;
    else if (a < 0)
        cout << "Number is Negative" << endl;
    else
        cout << "Number is Zero" << endl;

    return 0;
}

// OUTPUT
// Enter a number: 11
// Number is Positive
// Enter a number: -11
// Number is Negative
// Enter a number: 0
// Number is Zero