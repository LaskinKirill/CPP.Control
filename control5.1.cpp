#include <iostream>
#include <vector>
using namespace std;
void minmax(int n, int a[]);
int main()
{
	int N = 10;
	int b[] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	minmax(N,  b);
	for (int i : b)
		cout << i << '\t';
}
void minmax(int n, int a[]) {
	int min = 0; // ��� ������ ������������ ��������
	int buf = 0; // ��� ������ ����������
	for (int i = 0; i < n; i++)
	{
		min = i; // ����� ������� ������, ��� ������ � ����������� ���������
		// � ����� ������ �������� ����� ������ � ����������� ���������
		for (int j = i + 1; j < n; j++)
			min = (a[j] < a[min]) ? j : min;
		// ������������ ����� ��������, ������� ��� ������� � �������
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	
}