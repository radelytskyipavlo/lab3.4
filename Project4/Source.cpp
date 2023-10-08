// Lab_03_4.cpp
// Раделицького Павла
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;	cout << "R = "; cin >> R;	// розгалуження в повній формі	if ((y <= sqrt(R * R - x * x) && y >= (x - 1) * (x - 1)) || (y <= 0 && y >= sqrt(R * R - x * x)))		cout << "yes" << endl;	else		cout << "no" << endl;	cin.get();	return 0;}