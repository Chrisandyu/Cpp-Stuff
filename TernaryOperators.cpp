#include <iostream>

using namespace std;

int main(){

    //Ternary operator ?: replacement to an if/else statement
    //Condition ? Expression1 : Expression2;

    int grade = 50;
    grade >= 60 ? cout << "You pass!" << endl : cout << "You failed!" << endl;

    int num = 9;
    !(num % 2) ? cout << "Even number" << endl : cout << "Odd number" << endl;

    bool hungry = false;
    hungry ? cout << "You are hungry" << endl : cout << "You are full" << endl;

    //cout << (hungry ? "You are hungry" : "You are full");                     Another way of writing it

    return 0;
}