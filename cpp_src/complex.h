#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex
{
    public:
        Complex();

        Complex(const double& Im,
                const double& Re);

        double real();
        double imag();
        void set_real(const double& Re);
        void set_imag(const double& Im);
        
#if 0
        double abs();
        double arg();
        Complex conj_complex();
        

        Complex +operator(const Complex& j);

#endif
    private:
        double real;
        double imaginary;
};


#endif // _COMPLEX_H_