#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// Задание

	cout << "Задание.\n";

	int X, Y;
	cout << "Введите Х и Y -> ";

	cin >> X >> Y;

	int* px = &X;
	int* py = &Y;

	int simpleMean = (*px + *py) / 2;

	cout << "Среднее арифметическое этих чисел: ";
	cout << simpleMean << endl;

	return 0;
}