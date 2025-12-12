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

double areaRectangle(double a, double b) {
    return a * b;
}

double areaTriangle(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    cout << "Calculator of areas" << endl;
    cout << "1 - circle" << endl;
    cout << "2 - square" << endl;
    cout << "3 - rectangle" << endl;
    cout << "4 - triangle" << endl;
    cout << "Choose figure: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area = " << areaCircle(r) << endl;
    }
    else if (choice == 2) {
        double a;
        cout << "Enter side: ";
        cin >> a;
        cout << "Area = " << areaSquare(a) << endl;
    }
    else if (choice == 3) {
        double a, b;
        cout << "Enter side a: ";
        cin >> a;
        cout << "Enter side b: ";
        cin >> b;
        cout << "Area = " << areaRectangle(a, b) << endl;
    }
    else if (choice == 4) {
        double a, h;
        cout << "Enter base: ";
        cin >> a;
        cout << "Enter height: ";
        cin >> h;
        cout << "Area = " << areaTriangle(a, h) << endl;
    }
    else {
        cout << "Not implemented yet" << endl;
    }

    system("pause");
    return 0;
}