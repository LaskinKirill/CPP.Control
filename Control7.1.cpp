#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string> 
#include <sstream>
using namespace std;

struct time
{
    int hours;
    int minutes;
    int seconds;
    void sumtime( time t1, time t2);
    void minustime(time t1, time t2);
    int inputhours();
    int inputminutes();
    int inputseconds();
};
int time::inputhours() {
    char dir = 'a';
    struct time Time;
    Time.hours = -2;
    
    while (Time.hours < 0 || Time.hours > 24)
    {
        cout << "Enter the number of hours: ";
        cin >> Time.hours;
        if (Time.hours < 0 || Time.hours > 24)
        {
            cout << "Wrong Time!";
            do
            {
                cout << "\nContinue?(y/n)";
                dir = _getche();
            } while (dir != 'y' && dir != 'n');
            if (dir == 'y')
            {
                cout << endl;
                continue;
            }
            else
            {
                cout << "\nExit..\n";
                system("pause");
                exit(0);
            }
        }
    };
    return Time.hours;
}
int time::inputminutes() {
    char dir = 'a';
    struct time Time;
    
    Time.minutes = -2;
    

    while (Time.minutes < 0 || Time.minutes >= 60)
    {
        cout << "Enter the number of minutes: ";
        cin >> Time.minutes;
        if (Time.minutes < 0 || Time.minutes >= 60)
        {
            cout << "Wrong time!";
            do
            {
                cout << "\nContinue?(y/n)";
                dir = _getche();
            } while (dir != 'y' && dir != 'n');
            if (dir == 'y')
            {
                cout << endl;
                continue;
            }
            if (dir == 'n')
            {
                cout << "\nExit...\n";
                system("pause");
                exit(0);
            }
        }
    };
    return Time.minutes;
}
int time::inputseconds() {
    char dir = 'a';
    struct time Time;
   
    Time.seconds = -2;

    while (Time.seconds < 0 || Time.seconds >= 60)
    {
        cout << "Enter the number of seconds: ";
        cin >> Time.seconds;
        if (Time.seconds < 0 || Time.seconds >= 60)
        {
            cout << "Wrong time!";
            do
            {
                cout << "\nContinue?(y/n)";
                dir = _getche();
            } while (dir != 'y' && dir != 'n');
            if (dir == 'y')
            {
                cout << endl;
                continue;
            }
            else
            {
                cout << "\nExit...\n";
                system("pause");
                exit(0);
            }
        }
    };
    return Time.seconds;
}

 void time::sumtime(time t1, time t2)
{

     time t3;
     int totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds + t2.hours*3600 + t2.minutes*60 + t2.seconds;
     
         t3.seconds = (totalsecs % 3600) % 60;
         t3.minutes = (totalsecs % 3600) / 60;
         t3.hours = totalsecs / 3600;
     
    
    cout << "Sumhours" << t3.hours << endl;
    cout << "Summinutes" << t3.minutes << endl;
    cout << "Sumseconds" << t3.seconds << endl;
    
}

void time::minustime(time t1, time t2) {
    time t3;
    int totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds - t2.hours * 3600 - t2.minutes * 60 - t2.seconds;
    if (totalsecs < 0) {
        cout << "minustime, error" << endl;
    }
    else {
        t3.seconds = (totalsecs % 3600) % 60;
        t3.minutes = (totalsecs % 3600) / 60;
        t3.hours = totalsecs / 3600;
    }
   
    cout << "Raznhours" << t3.hours << endl;
    cout << "Raznminutes" << t3.minutes << endl;
    cout << "Raznseconds" << t3.seconds << endl;
}

int main()
{
    unsigned long totalsecs1;
    unsigned long totalsecs2;
    struct time Time;
    struct time Time1;
    struct time Time2;
    

    Time1.hours = Time1.inputhours();
    Time1.minutes = Time1.inputminutes();
    Time1.seconds = Time1.inputseconds();
    
    Time2.hours = Time2.inputhours();
    Time2.minutes = Time2.inputminutes();
    Time2.seconds = Time2.inputseconds();  

    
    totalsecs1 = Time1.hours * 3600 + Time1.minutes * 60 + Time1.seconds;
    cout << "Totalsecs: " << totalsecs1 << endl;
    totalsecs2 = Time2.hours * 3600 + Time2.minutes * 60 + Time2.seconds;
    cout << "Totalsecs: " << totalsecs2 << endl;

    Time.sumtime(Time1, Time2);
    Time.minustime(Time1, Time2);

    system("pause");
    return 0;
}




