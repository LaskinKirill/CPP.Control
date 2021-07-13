#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    double x, y, i, result, score;
    string rating;
    result = 0;
    i = 1;
    while (result < 50)
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
        i++;
    }

    cout << "result = " << result << endl;
    cout << "amount shoots = " << i << endl;
    string str;
    if (i <= 15) {
        str = "sniper";
        cout << str << endl;
    }
    else if (i <= 25) {
        str = "shooter";
        cout << str << endl;
    }
    else if (i > 25) {
        str = "youngshooter";
        cout << str << endl;
    }
    
        
    return 0;
}