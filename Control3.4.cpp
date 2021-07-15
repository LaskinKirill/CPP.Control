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
    
    cout << "Введите число " << endl;
    cin >> a;
    rez = addNumders(a);
    cout << "Сумма ряда равна " << rez << endl;
    return 0;
}