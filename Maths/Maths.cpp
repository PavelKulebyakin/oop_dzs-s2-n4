#include"Maths.h"

double func_z(double a, double b)
{
	if (a < b) {
		return sqrt(abs(a * a - b * b));
	}
	else {
		return 1 - 2 * cos(a) * sin(b);
	}
}

double func_t(double a, double b, double z)
{
	if (z < b) {
		return pow(z + a * a * b, 1.5);
	}
	else if (z = b) {
		return 1 - log(z) + cos(a * a * b);
	}
	else {
		return 1 / cos(z * a);
	}
}
