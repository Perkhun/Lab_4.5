#include <iostream>
#include <iomanip>
#include <time.h>


using namespace std;
int main()

{
	double x, y, R;
	


	cout << "R = "; cin >> R;
	cout << endl;

	cout << "Choose x, y" << endl;
	cout << endl;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		
		cout << "x= "; cin >> x;
		cout << "y= "; cin >> y;

		if (((pow(x + R, 2) + pow(y, 2) <= pow(R, 2)) && x >= -R && x <= 0 && y >= 0) ||
			(pow(x - R, 2) + pow(y, 2) <= pow(R, 2)) && x <= R && x >= 0 && y <= 0)

			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	cout << endl << fixed;

	cout << "Random x,y" << endl;

	for (int i = 0; i < 10; i++)
	{
		x = -R + rand() * (R - (-R)) / RAND_MAX;
		y = -R + rand() * (R - (-R)) / RAND_MAX;

		if (((pow(x + R, 2) + pow(y, 2) <= pow(R, 2)) && x >= -R && x <= 0 && y >= 0) ||
			(pow(x - R, 2) + pow(y, 2) <= pow(R, 2)) && x <= R && x >= 0 && y <= 0)

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;

	}
	return 0;
}
