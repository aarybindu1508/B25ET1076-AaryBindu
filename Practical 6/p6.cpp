#include <iostream>
using namespace std;

// Create class Complex
class Complex
{
    int real, imag;   // Real and imaginary parts

public:

    // Function to take input
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Overload == operator
    bool operator == (Complex c)
    {
        // Check real and imaginary parts
        if(real == c.real && imag == c.imag)
            return true;
        else
            return false;
    }
};

int main()
{
    Complex c1, c2;   // Create two objects

    // Input first complex number
    cout << "Enter first complex number:\n";
    c1.getData();

    // Input second complex number
    cout << "\nEnter second complex number:\n";
    c2.getData();

    // Compare two complex numbers
    if(c1 == c2)
        cout << "Complex numbers are equal.";
    else
        cout << "Complex numbers are not equal.";

    return 0;   // End of program
}
