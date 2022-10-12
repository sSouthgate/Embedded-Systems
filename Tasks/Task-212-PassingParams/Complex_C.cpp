#include "mbed.h"
#include "Complex_C.hpp"
#include <type_traits>

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}


ComplexNumber_C complexConjugate(const ComplexNumber_C c) {
    ComplexNumber_C result = c;
    result.imag *= -1.0;
    return result;
}

ComplexNumber_C complexNegate(const ComplexNumber_C n) {
    ComplexNumber_C result;
    result.real *= -1.0;
    result.imag *= -1.0;

    return result;
}

ComplexNumber_C complexSubstract(const ComplexNumber_C a, const ComplexNumber_C b){
    ComplexNumber_C negate_result = complexNegate(b);
    ComplexNumber_C result = complexAdd(a, negate_result);

    return result;
}

double complexMag(const ComplexNumber_C a)
{
    double result;
    result = sqrt(a.real*a.real + a.imag*a.imag);

    return result;
}

ComplexNumber_C complexMultiply(const ComplexNumber_C a, ComplexNumber_C b){
    ComplexNumber_C result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    
    return result;
}

ComplexNumber_C complexMultiplyForDivision(const ComplexNumber_C a, ComplexNumber_C b){
    ComplexNumber_C result;
    result.real = a.real * b.real + a.imag * b.imag;
    result.imag = a.real * b.imag - a.imag * b.real;
    
    return result;
}

ComplexNumber_C complexDivide(const ComplexNumber_C a, ComplexNumber_C b){
    ComplexNumber_C result = complexMultiplyForDivision(a,b);
    result.real /= complexMag(b);
    result.imag /= complexMag(b);
    
    return result;
}