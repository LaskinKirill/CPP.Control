#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double iterfunc(double x) {  
    
    double yi = x, yi1 = 0; 
    while (true)
    {
        yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi));
        if (abs(yi1 - yi) < pow(10.0, -5.0))
            break;
        yi = yi1;
    }
    return yi;
}
int main()
{
    setlocale(LC_ALL, "rus");
	double a, rez, rezi;
	cout << "Input a: " << endl;
	cin >> a;
	rez = pow(a, 1.0 / 3);
	cout << "Result = " << rez << endl;
    rezi = iterfunc(a);
    cout << "Iteration = " << rezi << endl;
}