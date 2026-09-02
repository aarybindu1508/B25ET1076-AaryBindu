
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void getdata();
    void displayData();
    void add(Complex c1, Complex c2);
    void sub(Complex c1, Complex c2);
    void multiply(Complex c1, Complex c2);
    void divide(Complex c1, Complex c2);
};

void Complex::getdata()
{
    cout << "Enter real part: ";
    cin >> real;

    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::displayData()
{
    if(imag >= 0)
        cout << real << " + " << imag << "i";
    else
        cout << real << " - " << -imag << "i";
}

void Complex::add(Complex c1, Complex c2)
{
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}

void Complex::sub(Complex c1, Complex c2)
{
    real = c1.real - c2.real;
    imag = c1.imag - c2.imag;
}

void Complex::multiply(Complex c1, Complex c2)
{
    real = c1.real * c2.real - c1.imag * c2.imag;
    imag = c1.real * c2.imag + c1.imag * c2.real;
}

void Complex::divide(Complex c1, Complex c2)
{
    float denominator;

    denominator = c2.real * c2.real + c2.imag * c2.imag;

    real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
}

int main()
{
    Complex c1, c2, c3, c4, c5, c6;

    cout << "Enter first complex number:\n";
    c1.getdata();

    cout << "\nEnter second complex number:\n";
    c2.getdata();

    c3.add(c1, c2);
    c4.sub(c1, c2);
    c5.multiply(c1, c2);
    c6.divide(c1, c2);

    cout << "\nAddition = ";
    c3.displayData();

    cout << "\nSubtraction = ";
    c4.displayData();

    cout << "\nMultiplication = ";
    c5.displayData();

    cout << "\nDivision = ";
    c6.displayData();

    return 0;
}

