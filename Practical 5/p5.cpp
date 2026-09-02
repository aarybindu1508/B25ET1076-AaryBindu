#include <iostream>
using namespace std;

class Volume
{
public:
    int volume(int side)
    {
        return side * side * side;
    }

    int volume(int length, int breadth, int height)
    {
        return length * breadth * height;
    }
};

int main()
{
    Volume v;

    int side, length, breadth, height;

    cout << "Enter side of cube: ";
    cin >> side;

    cout << "Volume of cube = " << v.volume(side) << endl;

    cout << "\nEnter length, breadth and height of cuboid: ";
    cin >> length >> breadth >> height;

    cout << "Volume of cuboid = "
         << v.volume(length, breadth, height);

    return 0;
}
