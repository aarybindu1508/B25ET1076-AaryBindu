#include <iostream>
using namespace std;

int main()
{
    // Declare an array of 5 elements
    int a[5] = {10, 20, 30, 40, 50};
    int index;

    // Ask the user to enter an array index
    cout << "Enter array index (0 to 4): ";
    cin >> index;

    try
    {
        // Check whether the index is out of bounds
        if (index < 0 || index >= 5)
        {
            // Throw an exception if the index is invalid
            throw index;
        }

        // Display the element at the given index
        cout << "Element = " << a[index] << endl;
    }
    catch (int x)
    {
        // Catch the exception thrown above
        cout << "Exception caught!" << endl;

        // Display the invalid index
        cout << "Array index " << x
             << " is out of bounds." << endl;
    }

    return 0;  // End the program
}
