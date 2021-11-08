#include <math.h>

void f(const double* x,const double* y,  double* result)
{
	*result = pow(cos(*x) - cos(*y), 2) - pow(sin(*x) - sin(*y), 2);
}
