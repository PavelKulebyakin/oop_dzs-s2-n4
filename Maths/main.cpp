// Вариант 2
#include"Maths.h"

int main() 
{
	double a = -0.6, b = 5.3; //cin >> a >> b;

	cout << "a = " << a << "; b = " << b << ";";

	double z, t;
	z = func_z(a, b); 
	t = func_t(a, b, z);

	cout << " z = " << z << "; t = " << t << ";\n";
}
