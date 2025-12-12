#include <iostream>
#include <cmath>
using namespace std;

double areaCircle(double r) {
    const double PI = 3.14;
    return PI * r * r;
}

double areaSquare(double a) {
    return a * a;
}

int main() {
    cout << "Calculator of areas" << endl;
    cout << "1 - circle" << endl;
    cout << "2 - square" << endl;
    cout << "Choose figure: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area = " << areaCircle(r) << endl;
    } else if (choice == 2) {
        double a;
        cout << "Enter side: ";
        cin >> a;
        cout << "Area = " << areaSquare(a) << endl;
    } else {
        cout << "Not implemented yet" << endl;
    }

    system("pause");
    return 0;
}