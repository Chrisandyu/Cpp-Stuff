#include <iostream>

using namespace std;

int main(){

    //sizeof() -  determines size of in bytes of a variable, class, etc.

    double gpa = 3.8;
    string name = "heehee";
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string students[] = {"spongebob", "patrick", "squidward"};

    cout << sizeof(gpa) << " bytes\n";       //double
    cout << sizeof(name) << " bytes\n";      //string
    cout << sizeof(grade) << " bytes\n";     //char
    cout << sizeof(student) << " bytes\n";     //boolean
    cout << sizeof(grades) / sizeof(char) << " elements\n";     //array of chars
    cout << sizeof(students) / sizeof(string) << " elements\n";     //array of strings

    return 0;
}