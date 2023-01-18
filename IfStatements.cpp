#include <iostream>

using namespace std;

int main(){

    //If statements: do something if a condition is true.
    //               If not, don't do it.

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "Welcome to the site!" << endl;
    }else if(age < 0){
        cout << "You haven't been born yet!" << endl;
    }else if(age >= 100){
        cout << "You are too old to enter this site!" << endl;
    }else{
        cout << "You are not old enough to enter!" << endl;
    }

    return 0;
}