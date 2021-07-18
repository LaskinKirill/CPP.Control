#include <iostream>
#include <math.h>

using namespace std;
bool Input(int a, int b) {	
	
		int x, y;
		cout << "input x and y " << endl;
		cin >> x;
		cin >> y;

		if (x != a || y != b)
			return false;
		else
			return true;
}
int main()
{
	int a, b;
	cout << "Input a, b " << endl;
	cin >> a;
	cin >> b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << "s = " << s << endl;
	return 0;
}
