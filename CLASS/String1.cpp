#include <iostream>
using namespace std;

class Phone {
public:
    // data members / attributes / properties
    string brand, model;
    int camera, ram, internalMemory;

    // member function / behaviour
    void displayinfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Camera: " << camera << " megapixel" << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Internal Memory: " << internalMemory << " GB" << endl;
    }
};

int main() {
    Phone p1, p2, p3;

    p1.brand = "Moto";
    p1.model = "Edge 40";
    p1.camera = 50;
    p1.ram = 16;
    p1.internalMemory = 256;

    p2.brand = "Samsung";
    p2.model = "Ultra S24";
    p2.camera = 200;
    p2.ram = 16;
    p2.internalMemory = 512;

    p3.brand = "iPhone";
    p3.model = "17 Pro Max";
    p3.camera = 48;
    p3.ram = 16;
    p3.internalMemory = 256;

    p1.displayinfo();
    p2.displayinfo();
    p3.displayinfo();

    return 0;
}
