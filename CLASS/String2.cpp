#include<iostream>
using namespace std;

class phone{
public:
    string brand, model;
    int camera, ram, internalMemory;
    phone(string b, string m, int c, int r, int i){
        brand = b;
        model = m;
        camera = c;
        ram = r;
        internalMemory = i;
    }
 void displayinfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Camera: " << camera << " megapixel" << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Internal Memory: " << internalMemory << " GB" << endl;
    }
};

int main() {
    phone p1("Moto", "Edge 40", 50, 16, 256);
    phone p2("Samsung", "Ultra S24", 200, 16, 512);
    phone p3("iPhone", "17 Pro Max", 48, 16, 256);
    
    p1.displayinfo();
    p2.displayinfo();
    p3.displayinfo();

    return 0;
}
