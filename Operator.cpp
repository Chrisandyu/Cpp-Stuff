#include <iostream>

using namespace std;

int main(){
    int students = 20;

    //Addition
    students = students + 1;
    students += 1;
    students++;  //adds 1

    //Subtraction
    students = students - 1;
    students -= 1;
    students--; //subtracts 1

    //Multiplication
    students = students * 2;
    students *= 2;

    //Division
    students = students / 2;
    students /= 2; //decimal will get deleted since students is an int

    cout << students << endl;

    //Modulous
    int remainder = students % 3;

    cout << remainder << endl;

    int studentsTwo = 6 - (5 + 4) * 3 / 2; // Follow order of operations
    cout << studentsTwo << endl;

    return 0;
}