#include "mbed.h"

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

    ComplexNumber_C complexSum(ComplexNumber_C p, ComplexNumber_C q)
    {
        ComplexNumber_C result = p;
        result.real += q.real;
        result.imag += q.imag;
        return result;
    }
    

int main() {

    //Create instance of a complex number
    ComplexNumber_C p;
    ComplexNumber_C y;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    y.real = 0;
    y.imag = 0;

    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};

    // TASK:
    // Create another complex number y
    // Calculate the complex sum of p and q and store in y
    // Use printf to display as a complex number (hint: you need two placeholders)


    while (true) {

        y = complexSum(p,q);
        printf("%f + %f j\n", y.real, y.imag);
        return EXIT_SUCCESS;

    }
}
