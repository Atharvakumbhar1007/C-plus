#include <iostream>
using namespace std;

class DynamicArray
{
private:
    int *data;

public:
    // Constructor to allocate memory
    DynamicArray(int size)
    {
        data = new int[size];
        cout << "Constructor: Allocated memory for array of size " << size << endl;
    }

    // Destructor to free memory
    ~DynamicArray()
    {
        delete[] data;
        cout << "Destructor: Deallocated memory" << endl;
    }
};

int main()
{
    // Object created, constructor called
    DynamicArray obj(5);
    // Object goes out of scope, **destructor is called automatically to free the allocated memory and release resources**.
    return 0;
}