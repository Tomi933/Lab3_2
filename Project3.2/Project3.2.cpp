#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (c < 0 && a != 0)
		F = (-1) * a * x * x;
	if (c > 0 && a == 0)
		F = (a - x) / c * x;
	if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
		F = x / c;
	cout << endl;
	cout << "1) F = " << F << endl;
	// спосіб 2: розгалуження в повній формі
	if (c < 0 && a != 0)
		F = (-1) * a * x * x;
	else
		if (c > 0 && a == 0)
			F = (a - x) / c * x;
		else
			F = x / c;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}