#include <string>
#include <iostream>
#include<math.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <sstream>
using namespace std;
#include <fstream>

class Warman {
public:

	virtual void get_full_inform()
	{
		cout << "\nInput warman name:  ";
		getline(cin >> ws, name);
		cout << "\nInput warman title:  ";
		getline(cin >> ws, title);
	}
	virtual void put_full_inform()
	{
		cout << "\nName: " << name;
		cout << "\nTitle:  " << title;
	}
	virtual void showWarmanType() = 0;

	string name;
	string title;
};

class Marine : public Warman
{
public:

	void get_full_inform()
	{
		Warman::get_full_inform();
		cout << "\nInput marine type: ";
		getline(cin >> ws, type);
	}
	void put_full_inform()
	{
		Warman::put_full_inform();
		cout << "\nType: " << type << endl;
		ofstream out("test.txt", ios::app);
		if (out.is_open())
		{
			out << name << "  " << title << " " << type << endl;
		}
		out.close();
	}
	void showWarmanType()
	{
		cout << "Marine" << endl;
	}

private:
	string type;
};

class Art : public Warman
{
public:

	void get_full_inform()
	{
		Warman::get_full_inform();
		cout << "\nInput art size: ";
		cin >> size;
	}
	void put_full_inform()
	{
		Warman::put_full_inform();
		cout << "\nSize: " << size << endl;
		ofstream out("test.txt", ios::app);
		if (out.is_open())
		{
			out << name << "  " << title << " " << size << endl;
		}
		out.close();
	}
	void showWarmanType()
	{
		cout << "Art" << endl;
	}
private:
	string size;
};

class IOrganizer
{
public:
	virtual ~IOrganizer() {}
	virtual void OverrideGet() = 0;
};

class Division : IOrganizer
{
public:
	void showDivision()
	{
		int division_name = (0 + rand() % 5);
		if (division_name == 0)
			cout << " Division name Mos" << endl;
		if (division_name == 1)
			cout << " Division name Pit" << endl;
		if (division_name == 2)
			cout << "Division name Sam " << endl;
		if (division_name == 3)
			cout << " Division name Ekat" << endl;
		if (division_name == 4)
			cout << " Division name Novosib " << endl;
	}
	void OverrideGet()
	{
		for (int i = 0; i < 10; i++)
		{
			scores.push_back(2 + rand() % 12);
		}
		unsigned int count_scores = scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "\nAverage Score " << average_score << endl;
	}
private:
	vector<int> scores;
};

int main()
{
	srand(time(NULL));
	Warman* test[10];
	int n = 0;
	char choice;

	do
	{
		cout << "\nMarine or Art show( m / a) ? " << endl;
		cin >> choice;
		if (choice == 'm')
		{
			test[n] = new Marine;
		}
		else {
			test[n] = new Art;
		}
		test[n++]->get_full_inform();
		cout << "Continue((y / n) ? ";
		cin >> choice;
	} while (choice == 'y');
	cout << endl;
	cout << " Warman show continue " << endl;
	for (int j = 0; j < n; j++)
		test[j]->put_full_inform();
	cout << endl;

	for (int j = 0; j < n; j++)
	{
		Division showdivision;
		showdivision.showDivision();
		cout << " Results of competion ";
		cout << test[j]->name << " " << test[j]->title;
		showdivision.OverrideGet();
		
	}

	return 0;

}