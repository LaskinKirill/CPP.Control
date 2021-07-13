#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double side(int xb, int xc, int yb, int yc) {
	double a = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
	return a;
}
double triangle(double a, double b, double c) {
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
int main()
{
	int ar[10] = { 1, 1, 2, 6, 8, 8, 12, 4, 10, 1 };
	double s, s1, s2, s3, a, b, c, e, d, f, g;
	a = side(ar[0], ar[2], ar[1], ar[3]);
	cout << "a = " << a << endl;
	b = side(ar[0], ar[8], ar[1], ar[9]);
	cout << "b = " << b << endl;
	c = side(ar[6], ar[8], ar[7], ar[9]);
	cout << "c = " << c << endl;
	d = side(ar[6], ar[4], ar[7], ar[5]);
	cout << "d = " << d << endl;
	e = side(ar[2], ar[4], ar[3], ar[5]);
	cout << "e = " << e << endl;
	f = side(ar[2], ar[8], ar[3], ar[9]);
	cout << "f = " << f << endl;
	g = side(ar[2], ar[6], ar[3], ar[7]);
	cout << "g = " << g << endl;

	s1 = triangle(a, b, f);
	cout << "s1 = " << s1 << endl;
	s2 = triangle(c, f, g);
	cout << "s2 = " << s2 << endl;
	s3 = triangle(d, e, g);
	cout << "s3 = " << s3 << endl;
	s = s1 + s2 + s3;
	cout << "Square is " << s << endl;

}