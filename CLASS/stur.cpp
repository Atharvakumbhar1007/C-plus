#include <iostream>
#include <string>
using namespace std;

struct student{
    int sid;
    string name;
    string email;
    string address;
    char gender;
    float percentage;
};
int main(){

    student s1;
    student[0].sid = 102;
    student[0].name ="ali";
    student[0].email = "op.ali@gmail.com";
    student[0].address = "sector 8, kharghar";
    student[0].gender = 'm';
    student[0].percentage = 88.3;


    student s2;
    student[1].sid = 118;
    student[1].name ="abbas";
    student[1].email = "abbas@gmail.com";
    student[1].address = "talegaon,pune";
    student[1].gender = 'm';
    student[1].percentage = 84;



    for (int i = 0; i < 3; i++){
        cout << "student ID: "<<students[i].sid << endl; 
    }

    std::cout << "Student Name: " << s1.name << std::endl;
    std::cout << "Roll No: " << s1.rollNo << std::endl;
    std::cout << "Age: " << s1.age << std::endl;

return 0;
}