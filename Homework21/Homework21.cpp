#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// �������

	cout << "�������.\n";

	int X, Y;
	cout << "������� � � Y -> ";

	cin >> X >> Y;

	int* px = &X;
	int* py = &Y;

	int simpleMean = (*px + *py) / 2;

	cout << "������� �������������� ���� �����: ";
	cout << simpleMean << endl;

	return 0;
}