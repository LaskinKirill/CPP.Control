#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    double x, y, result, score;
    string rating;
    result = 0;
    for (int i = 1; i <= 10; i++)
    {
        x = rand() % (6 - 1);
        cout << "x = " << x << endl;
        y = rand() % (6 - 1);
        cout << "y = " << y << endl;

        if ((x * x + y * y) <= 4) {
            score = 5;
            cout << "score = " << score << endl;
        }
        else if (4 < (x * x + y * y) && (x * x + y * y) <= 16) {
            score = 2;
            cout << "score = " << score << endl;
        }
        else if (16 < (x * x + y * y) && (x * x + y * y) <= 36) {
            score = 1;
            cout << "score = " << score << endl;
        }
        
        result = result + score;
        
    }

    cout << "result = " << result << endl;
    string str;
    if (result >= 50) {
        str = "sniper";
        cout << str << endl;
    }
    else if (50 > result && result >= 25) {
        str = "shooter";
        cout << str << endl;
    }
    else if (25 > result) {
        str = "youngshooter";
        cout << str << endl;
    }
    
        
    return 0;
}