// Lab_03_3.cpp
// Криворучко Анастасія
// Лабораторна робота №3.3
// Розгалуження задане графіком функції
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x;
	double R1;
	double R2;
	double y;

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;


	// 
	if (x <= -R1)
		y = (R1 * (x + 2)) / (R1 - 2);
	else
		if (-R1 < x && x <= 0)
			y = sqrt(pow(R1, 2) - pow(x, 2)) - R1;
		else
			if (x > 0 && x <= R2)
				y = R2 - sqrt(pow(R2, 2) - pow(x, 2));
			else
				if (R2 < x && x <= 4)
					y = -R1;
				else
					y = (R1 / 2) * (x - 6);

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;

}