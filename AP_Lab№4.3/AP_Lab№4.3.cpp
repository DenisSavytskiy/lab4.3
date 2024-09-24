#define _USE_MATH_DEFINES

#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;
int main()
{
	double x, xp, xk, dx, B, a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{

		if (x < 5 && c != 0) B = (-1 * a) * x * x - b;
		else if (x > 5 && c == 0)  B = (x - a) / x;
		else  B = -1 * x / c;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << B
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}