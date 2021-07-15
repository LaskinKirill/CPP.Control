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
    cout << "Выберите type ravn или razn? " << endl;
    cin >> type;
    if (type == "ravn") {
        cout << "Вы выбрали ravn" << endl;
        cout << "Input a: " << endl;
        cin >> a;
        rez = triangle(a);
        cout << "Площадь треугольника = " << rez << endl;
        return 0;
    }
    if (type == "razn") {
        cout << "Вы выбрали razn" << endl;
        cout << "Input a, b, c: " << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        rez = triangle(a, b, c);
        cout << "Площадь треугольника = " << rez << endl;
        return 0;
    }
    else
        cout << "Попробуйте еще раз." << endl;

        return 0;
}