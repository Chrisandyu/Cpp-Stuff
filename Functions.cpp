#include <iostream>

using namespace std;

void happyBirthday(string name, int age){
    for(int i = 0; i < 3; i++){
        cout << "Happy Birthday to " << name << endl;
        cout << "You are " << age << " years old!" << endl;
    }
}

int main(){

    string name = "chris";
    int age = 14;

    happyBirthday(name, age);

    return 0;
}