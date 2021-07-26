#include<math.h>
#include <iostream>
using namespace std;
#include <windows.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <sstream>


class human {
public:

	virtual void get_full_inform()
	{
		cout << "\n������� �������:";
		cin >> last_name;
		cout << "\n������� ���:";
		cin >> name;
		cout << "\n������� ��������:";
		cin >> second_name;

	}
	virtual void put_full_inform()
	{
		cout << "\n�������: " << last_name;
		cout << "\n���:" << name;
		cout << "\n��������:" << second_name;
	}
private:
	string name; // ���
	string last_name; // �������
	string second_name; // ��������

};

class student : public human
{
public:
	void get_full_inform()
	{
		human::get_full_inform();
	}
	void put_full_inform()
	{
		human::put_full_inform();
		vector<int> scores;
		for (int i = 0; i < 10; i++)
		{
			scores.push_back(2 + rand() % 5);
		}
		unsigned int count_scores = scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		cout << "\n������� ���� " << average_score << endl;
	}
private:
	vector<int> scores;
};


class teacher : public human {

	void get_full_inform()
	{
		human::get_full_inform();
	}
	void put_full_inform()
	{
		human::put_full_inform();
		work_time = 30 + rand() % 20;
		cout << "\n���������� �����: " << work_time << endl;
	}
private:
	unsigned int work_time;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	human* test[100];
	int n = 0;
	char choice;
	do
	{
		cout << "\n������� ������ ��� �������� ��� ��� �������( b / a) ? ";
		cin >> choice;
		if (choice == 'b')
			test[n] = new student;
		else
			test[n] = new teacher;
		test[n]->get_full_inform();
		n++;
		cout << "����������((� / n) ? ";
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++)
		test[j]->put_full_inform();
	cout << endl;	return 0;
}