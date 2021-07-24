
#include <iostream>
#include <cmath>
using namespace std;


struct Polynom
{
	double a;
	double b;
	double c;

};

void roots(Polynom p) {
	double x1, x2, D;
	D = p.b * p.b - 4 * p.a * p.c;
	if (p.a == 0) {
		if (p.b != 0) cout << "x = " << p.c / p.b << endl;
		else if (p.c == 0) cout << "x is any number\n";
		else cout << "There are no roots!\n";
	}
	else {
		if (D == 0)cout << "The only root is " << -p.b / 2 / p.a << endl;
		else if (D > 0) {
			x1 = (-p.b + sqrt(D)) / 2 / p.a;
			x2 = (-p.b - sqrt(D)) / 2 / p.a;
			cout << "Real roots are:\n";
			cout << "x1 = " << x1 << " x2 = " << x2 << endl;
		}
		else {
			cout << "Complex roots are:\n";
			cout << "x1 = " << -p.b / 2 / p.a << "+" << sqrt(-D) / 2 / p.a << "i\n";
			cout << "x2 = " << -p.b / 2 / p.a << -sqrt(-D) / 2 / p.a << "i\n";
		}
	}
}

int main()
{
	Polynom P1;
	cout << "P1.a = " << endl;
	cin >> P1.a;
	cout << "P1.b = " << endl;
	cin >> P1.b;
	cout << "P1.c = " << endl;
	cin >> P1.c;
	roots(P1);
	return 0;
}