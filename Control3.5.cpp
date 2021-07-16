#include <iostream>
#include <string>

using namespace std;

void dec(const int num, string& snum) {
    if (num % 2 == 0)
        snum += "1";
    else snum += "0";
    if ((num / 2) != 0) dec(num / 2, snum);
    else return;
}

int main() 
{
    string snum;
    int n;
    cout << "Input n " << endl;
    cin >> n;
    dec(n, snum);
    cout << snum << endl;
}