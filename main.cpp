#include <iostream>

using namespace std;

#include "cpp_src/complex.h"




int main(void)
{
	cout << "Hello, World!" << endl;


	Complex x(2,2);

	cout << "x =" << x.real() << x.imag() <<"j" << endl;

	cout << x.abs() << endl;


	return 0;
}
