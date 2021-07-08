#include <iostream>
using namespace std; 
int main()
{
	system("chcp 1251");
	
	double S;
	int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
	cout << "\nВведите координаты вершин пятиугольника:\n";
	cin >> x1;
	cin >> x2;
	cin >> x3;
	cin >> x4;
	cin >> x5;
	cin >> y1;
	cin >> y2;
	cin >> y3;
	cin >> y4;
	cin >> y5;
	S = 0.5*(x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1 - x2*y1 - x3*y2 - x4*y3 - x1*y4);
	cout << "\nПлощадь пятиугольника равна = " << S << endl;
		return 0;
}