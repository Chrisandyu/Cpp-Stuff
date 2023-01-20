#include <iostream>

using namespace std;

void printInfo(string name, int age);

int main(){

    string name = "chris";
    int age = 12;

    printInfo(name, age);

    return 0;
}

void printInfo(const string name, const int age){
    cout << "Name: "<< name << '\n';
    cout << "Age: " << age << '\n';
}