// Lab_03.3.cpp
// Вольвенко Іван
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

// розгалуження в повній формі
	if (x <= -R)
		y = x + R;
	else
		if (x > -R && x <= 0)
			y = sqrt(R * R - x * x);
		else
			if (x > 0 && x <= 6)
				y = R - (x * R) / 6;
			else
				if (x > 6)
					y = x - 6;

	cout << endl;
	cout << "y = " << y << endl;
	
	cin.get();
	return 0;
}
