#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void speak()
    {
        cout << "ANIMAL MAKES SOUND" << endl;
    }
};

class Dog : public Animal
{
public:
    virtual void speak()
    {
        cout << "DOG BARKS" << endl;
    }
};
int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a->speak();
    return 0;
}
