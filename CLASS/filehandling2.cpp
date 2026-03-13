#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create a text string to store file content
    string myText;

    // read from text file
    ifstream Myfile("trick.txt");

    // read the file line by line
    while (getline(Myfile, myText))
    {
        // output the text from the file
        cout << myText << endl;
    }

    // close the file
    Myfile.close();

    return 0;
}