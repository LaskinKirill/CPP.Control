#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int addNumders(int n)
{
    if (n <= 0) return 0;
    else return (n*5 + addNumders(n - 1));
}
int main()
{
    setlocale(LC_ALL, "rus");
    int a, rez;
    
    cout << "������� ����� " << endl;
    cin >> a;
    rez = addNumders(a);
    cout << "����� ���� ����� " << rez << endl;
    return 0;
}