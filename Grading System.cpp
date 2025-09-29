// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, total;
    float avg;

    cout << "Enter marks of Maths: ";
    cin >> a;
    cout << "Enter marks of Physics: ";
    cin >> b;
    cout << "Enter marks of Chemistry: ";
    cin >> c;
    cout << "Enter marks of Biology: ";
    cin >> d;
    cout << "Enter marks of English: ";
    cin >> e;

    total = a + b + c + d + e;
    avg = static_cast<float>(total) / 5;

    cout << "Your average is " << avg << "%\n";

    if (avg >= 90 && avg <= 100)
        cout << "Grade is O";
    else if (avg >= 80)
        cout << "Grade is A+";
    else if (avg >= 70)
        cout << "Grade is A";
    else if (avg >= 60)
        cout << "Grade is B+";
    else if (avg >= 50)
        cout << "Grade is B";
    else
        cout << "Grade is F";

    return 0;
}

// OUTPUT
// Enter marks of Maths: 100
// Enter marks of Physics: 96
// Enter marks of Chemistry: 82
// Enter marks of Biology: 80
// Enter marks of English: 90
// Your average is 89.6%
// Grade is A+