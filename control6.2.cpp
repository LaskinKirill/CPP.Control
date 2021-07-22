#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string convertToString(int* a, int size)
{
	std::string str;
	for (size_t i = 0; i < size; i++)
	{
		str += std::to_string(a[i]);
		str += " ";

	}

	return str;
}

int* sort(const int* a, int size)
{
	int* mas = new int[size];
	int min = 0; 
	int buf = 0; 

	for (unsigned i = 0; i < size; i++)
	{
		mas[i] = a[i];

	}

	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
			min = (mas[j] < mas[min]) ? j : min;
		
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}
	return mas;
}

int main()
{
	const int N = 10;
	int source[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 57 };
	int* dest = sort(source, N);

	int a_size = sizeof(source) / sizeof(int);
	std::ofstream out("massive.txt");

	if (!out.is_open())
	{
		std::cout << "Error\n";
		return 1;
	}

	std::string line = convertToString(source, a_size);
	out << line << std::endl;
	dest = sort(source, N);

	line = convertToString(dest, a_size);
	out << line << std::endl;

	out.close();
}