#include <iostream>
#include <string>
using namespace std;
#include <map>
#include <windows.h>
#include <ctime>
struct SportsmenGrade
{
	string name;
	string grade;
};


int main()
{
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	string name;
	SportsmenGrade sportsmen;
	map<string, string> SportsmenGradeMap;
	map <string, string> ::iterator it;
	cout << "������� ���������� ����������� � ��������: " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "������� ��� ����������: " << endl;
		cin >> sportsmen.name;
		sportsmen.grade = {};
		SportsmenGradeMap.insert(make_pair(sportsmen.name, sportsmen.grade));
	}

	cout << "���������� �������" << endl;
	cout << "������� ��� ����������: " << endl;
	cin >> name;
	it = SportsmenGradeMap.find(name);
	if (it == SportsmenGradeMap.end()) {
		cout << "������ ���������� ���";
		return 1;
	}
	it->second = to_string((2 + rand() % 4));
	sportsmen.grade = it->second;
	cout << "������� ����������: " << it->first << " = " << it->second << endl;
	cout << endl;
	cout << "��������� �������  �������" << endl;
	for (it = SportsmenGradeMap.begin(); it != SportsmenGradeMap.end(); it++)
	{
		cout << "��������� ������� ���������� " << it->first << endl;
		cin >> it->second;
		cout << "������� ����������: " << it->first << " = " << it->second << endl;
	}
	return 0;
}