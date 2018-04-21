#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
      private:
            double real;
            double imaginary;

      public:
            Complex() : real(0), imaginary(0) {}
            Complex(double real, double imaginary) :
                  real(real), imaginary(imaginary) {}
            Complex(const Complex &other)
            {
                  std::cout << "Copy running" << std::endl;
                  real = other.real;
                  imaginary = other.imaginary;
            }
            const Complex &operator=(const Complex &other)
            {
                  std::cout << "Assignment running" << std::endl;
                  real = other.real;
                  imaginary = other.imaginary;

                  return *this;
            }

            double getReal() const { return real; }
            double getImaginary() const { return imaginary; }

};

std::ostream &operator<<(std::ostream &out, const Complex &c)
{
      out << "(" << c.getReal() << "," << c.getImaginary() << ")";
      return out;
}

#endif // COMPLEX_H
