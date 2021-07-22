
#include <iostream>
#include <fstream>
using namespace std;


void Example1(const char* filename)
{
    ofstream os(filename); 

    
    if (!os)
    {
        cout << "Cannot open the file to output. \n";
        return;
    }

    char str[80];

    cout << "Save the lines to FILE. Enter ! to stop." << endl;

    do
    {
        cout << ":";

        cin.getline(str, 80);

        os << str << endl;
    } while (*str != '!');

    os.close();
    return;
}

void main()
{
    Example1("myfile.txt");
}

