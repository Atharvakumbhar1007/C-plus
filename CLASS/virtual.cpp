#include <iostream>
using namespace std;

class shape
{
public:
    virtual void area() = 0; // pure virtual function
};

class Rectangle : public shape
{
public:
    void area()
    {
        cout << "Rectangle area function." << endl;
    }
};

class circle : public shape
{
public:
    void area()
    {
        cout << "Circle area function." << endl;
    }
};

int main()
{
    shape *s;
    Rectangle r;
    circle c;

    s = &r;
    s->area();

    s = &c;
    s->area();

    return 0;
}