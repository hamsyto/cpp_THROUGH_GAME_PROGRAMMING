#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c;

	setlocale(LC_CTYPE, "rus");
	cout << "�������� ��� ����� ����� ����� ������: ";
	cin >> a >> b >> c;
	cout << "\n����� �������� ��������: " << (a + b + c) / 3;

	getch();
}