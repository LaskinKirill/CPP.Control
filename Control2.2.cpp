#include <iostream> 
using namespace std; 
int main() {
	setlocale(LC_ALL, "Russian"); 
	int num1, num2, num3, max;
	cout << "������� 3 ����� " << endl;
	cout << "-->"; cin >> num1;
	cout << "-->"; cin >> num2;
	cout << "-->"; cin >> num3;
	if (num1 > num2) max = num1;
	else max = num2;
	if (max < num3) max = num3;
	cout << "������������ ����� : " << max << endl;
	system("PAUSE"); 
	return 0; 
}