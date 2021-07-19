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
	int min = 0; // дл€ записи минимального значени€
	int buf = 0; // дл€ обмена значени€ми
	for (int i = 0; i < n; i++)
	{
		min = i; // номер текущей €чейки, как €чейки с минимальным значением
		// в цикле найдем реальный номер €чейки с минимальным значением
		for (int j = i + 1; j < n; j++)
			min = (a[j] < a[min]) ? j : min;
		// перестановка этого элемента, помен€в его местами с текущим
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	
}