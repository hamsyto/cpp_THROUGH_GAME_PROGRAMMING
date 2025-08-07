#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a, b, c;

	setlocale(LC_CTYPE, "rus");
	cout << "Напишите три суммы очков через пробел: ";
	cin >> a >> b >> c;
	cout << "\nВывод среднего значения: " << (a + b + c) / 3;

	getch();
}