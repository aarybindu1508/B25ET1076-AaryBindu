#include <iostream>
using namespace std;

class String
{
    char *str;

public:
    // Constructor
    String()
    {
        str = new char[50];
    }

    // Accept string
    void Accept()
    {
        cout << "Enter String: ";
        cin >> str;
    }

    // Display string
    void Display()
    {
        cout << "String: " << str;
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String s;

    s.Accept();
    s.Display();

    return 0;
}
