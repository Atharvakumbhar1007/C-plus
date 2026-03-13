#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create and open file
    ofstream Myfile("trick.txt");

    // write to the file
    Myfile << "Files can be tricky, but it is fun enough";

    // Close the file
    Myfile.close();
}
