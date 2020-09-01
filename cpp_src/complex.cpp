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