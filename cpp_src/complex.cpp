#include "complex.h"¨

Complex::Complex() :
    imaginary(0),
    real(0)
{
    
}

Complex::Complex(const double& Im,
                 const double& Re) :
    imaginary(Im),
    real(Re)
{
    
}

double Complex::real()
{
    return real;
}

double Complex::imag()
{
    return imaginary;
}

void Complex::set_real(const double& Re)
{
    real = Re;
}

void Complex::set_imag(const double& Im)
{
    imaginary = Im;
}        