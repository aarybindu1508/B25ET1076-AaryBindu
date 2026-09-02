#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData();
    void conjugate();
    void displayData();
};

void Complex::getData()
{
    cout << "Enter real part: ";
    cin >> real;

    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::conjugate()
{
    imag = -imag;
}

void Complex::displayData()
{
    if(imag >= 0)
        cout << real << " + " << imag << "i";
    else
        cout << real << " - " << -imag << "i";
}

int main()
{
    Complex c;

    c.getData();
    c.conjugate();

    cout << "Complex conjugate = ";
    c.displayData();

    return 0;
}
