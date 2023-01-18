#include <iostream>

using namespace std;

int main(){

    string name;
    int age;

    cout << "What is your full name? ";
    //cin >> name;              does not work with spaces
    getline(cin, name);
    
    cout << "What is your age? ";
    cin >> age;

    cout << "Hello, " << name << endl;
    cout << "You are " << age << " years old" << endl; 

    return 0;
}