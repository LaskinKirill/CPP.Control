#include <iostream>
#include <math.h>

using namespace std;

int roots(double a, double b, double c, double* x1, double* x2);

int main()
{
    double a, b, c;
    double x1, x2;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    switch (roots(a, b, c, &x1, &x2))
    {
    case -1:
        std::cout << "Error input data";
        break;
    case 0:
        std::cout << "No roots";
        break;
    case 1:
        std::cout << "x = " << x1;
        break;
    case 2:
        std::cout << "x1 = " << x1 << std::endl << "x2 = " << x2;
        break;
    }

    
    return 0;
}

int roots(double a, double b, double c, double* x1, double* x2)
{
    double D;

    if (a == 0.0 && b == 0.0 && c == 0.0)
        return -1;
    else
    {
        if (a == 0.0)
        {
            if (b == 0.0)
                return -1;

            *x1 = -c / b;

            return 1;
        }
        else
        {
            D = b * b - 4.0 * a * c;

            if (D < 0.0)
                return 0;
            else
            {
                if (D == 0.0)
                {
                    *x1 = -b / (2.0 * a);

                    return 1;
                }
                else
                {
                    *x1 = (-b - sqrt(D)) / (2.0 * a);
                    *x2 = (-b + sqrt(D)) / (2.0 * a);

                    return 2;
                }
            }
        }
    }
}