#include <iostream>

class Time
{
    

public:
    int hours;
    int minutes;
    int seconds;
    char format[6]{};
    Time()// конструктор по умолчанию 
    {
        hours = 0;
        minutes = 0;
        seconds = 0;

    }
    
    Time(const Time& obj);
    Time concat(const Time& obj);
    bool setFormat(const char* format);
    Time(int hour, int minutes, int seconds, const char* format = "utc");
    const char* getFormat();
    void tickTime();
    Time Addtime(Time time1, Time time2);
    void ShowTime()
    {
        std::cout << hours << " : " << minutes << " : " << seconds <<std::endl;
    }
    
};

bool Time::setFormat(const char* format)
{
    if (strcmp("am/pm", format) == 0 || strcmp("utc", format) == 0)
    {
        strcpy_s(this->format, format);
        return true;
    }
    return false;
}

const char* Time::getFormat()
{
    return this->format;
}

Time::Time(int hour, int minutes, int seconds, const char* format)
{
    this->hours = hour;
    this->minutes = minutes;
    this->seconds = seconds;

    if (this->seconds >= 60)
    {
        this->seconds %= 60;
        this->minutes += 1;
    }

    if (this->minutes >= 60)
    {
        this->minutes %= 60;
        this->hours += 1;
    }

    if (this->hours >= 24)
        this->hours %= 24;


    strcpy_s(this->format, "utc");
}
void Time::tickTime()
{
    this->seconds += 1;

    if (this->seconds >= 60)
    {
        this->seconds %= 60;
        this->minutes += 1;
    }

    if (this->minutes >= 60)
    {
        this->minutes %= 60;
        this->hours += 1;
    }

    if (this->hours >= 24)
        this->hours %= 24;
}
Time::Time(const Time& obj)
{
    this->hours = obj.hours;
    this->minutes = obj.minutes;
    this->seconds = obj.seconds;
    strcpy_s(this->format, obj.format);
}
Time Time::concat(const Time& obj)
{
    Time time;
    time.hours = this->hours + obj.hours;
    time.minutes = this->minutes + obj.minutes;
    time.seconds = this->seconds + obj.seconds;

    if (time.seconds >= 60)
    {
        time.seconds %= 60;
        time.minutes += 1;
    }

    if (time.minutes >= 60)
    {
        time.minutes %= 60;
        time.hours += 1;
    }

    if (time.hours >= 24)
        time.hours %= 24;


    return time;
}

using namespace std;

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    // ваши действия 
    int h1, m1, s1, h2, m2, s2;
    cout <<"input h1"<< endl;
    cin >> h1;
    cout << "input m1" <<endl;
    cin >> m1;
    cout << "input s1" <<endl;
    cin >> s1;
    cout << "input h2" <<endl;
    cin >> h2;
    cout << "input m2" << endl;
    cin >> m2;
    cout << "input s2" <<endl;
    cin >> s2;

    Time* time1 = new Time(h1, m1, s1);
    Time* time2 = new Time(h2, m2, s2);
    Time time3;
    time1->tickTime();
    time2->tickTime();
    time3 = time1->concat(*time2);
    
    time3.ShowTime();
    cout << "hours" << time3.hours <<endl;
    cout << "minutes" << time3.minutes << endl;
    cout << "seconds" << time3.seconds << endl;

    system("pause");
    return 0;
}