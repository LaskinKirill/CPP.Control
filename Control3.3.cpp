#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double triangle(double a, double b, double c) {
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
double triangle(double a) {
    double s;
    s = (a * a * sqrt(3)) / 4;
    return s;
}
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c, rez;
    string type;
    cout << "�������� type ravn ��� razn? " << endl;
    cin >> type;
    if (type == "ravn") {
        cout << "�� ������� ravn" << endl;
        cout << "Input a: " << endl;
        cin >> a;
        rez = triangle(a);
        cout << "������� ������������ = " << rez << endl;
        return 0;
    }
    if (type == "razn") {
        cout << "�� ������� razn" << endl;
        cout << "Input a, b, c: " << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        rez = triangle(a, b, c);
        cout << "������� ������������ = " << rez << endl;
        return 0;
    }
    else
        cout << "���������� ��� ���." << endl;

        return 0;
}