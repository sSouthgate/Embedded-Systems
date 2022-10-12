#include "mbed.h"
#include "Complex_C.hpp"
#include <cstdio>

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);
    ComplexNumber_C conjugate = complexConjugate(p);
    complexDisplay("p conjugate", conjugate);
    ComplexNumber_C negate = complexNegate(q);
    complexDisplay("q negate", negate);
    ComplexNumber_C substract = complexSubstract(p, q);
    complexDisplay("p-q", substract);
    double m = complexMag(q);
    printf("q mag = %f \n", m);
    ComplexNumber_C multiply = complexMultiply(p, q);
    complexDisplay("p*q", multiply);
    ComplexNumber_C divide = complexDivide(p, q);
    complexDisplay("p/q", divide);

    while (true) {
    }
}
