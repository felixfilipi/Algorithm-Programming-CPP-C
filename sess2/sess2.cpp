#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    
    double a, b, c, d, x, y;

    cout << "\t\t\t\t" << "Math Calculator" << "\n\n";
    cout << "Calculation of first unsorted equation" << "\n";
    cout << "**************************************" << "\n\n";
    cout << "\t\t\t" << "x = (sqrt(a) + b^3 - c*b) /a";
    cout << "\n\n" << "Where"  << "\t:\t" << "a = first entered number" << "\n";
    cout << "\t\t" << "b = second entered number" << "\n";
    cout << "\t\t" << "c = third entered number" << "\n";
    cout << "\t\t" << "x = first unsorted equation result" << "\n";

    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;

    x = (sqrt(a) + pow(b, 3) - c*b) / a;
    cout << "\n \t" << fixed << "x = " << setprecision(2) << x << "\n\n\n";

    cout << "Calculation of second unsorted equation" << "\n";
    cout << "**************************************" << "\n\n";
    cout << "\t\t\t" << "y = (d*b + x/c -a)^2";
    cout << "\n\n" << "Where"  << "\t:\t" << "d = fourth entered number" << "\n";
    cout << "\t\t" << "y = second unsorted equation result" << "\n";
    cout << "Input d: ";
    cin >> d;
    
    y = pow((d * b + x/c - a),2);

    cout << "\n \t" << fixed << "y = " << setprecision(2) << y <<"\n\n";
    return 0;
}
