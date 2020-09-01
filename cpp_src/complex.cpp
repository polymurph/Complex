#include "complex.h"
#include <math.h>

Complex::Complex() :
    im(0),
    re(0)
{
    
}

Complex::Complex(const double& Im,
                 const double& Re) :
    im(Im),
    re(Re)
{
    
}

double Complex::real()
{
    return re;
}

double Complex::imag()
{
    return im;
}

void Complex::set_real(const double& Re)
{
    re = Re;
}

void Complex::set_imag(const double& Im)
{
    im = Im;
}        

double Complex::abs()
{
    return sqrt(re * re + im * im);
}