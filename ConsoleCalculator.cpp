#include <iostream>

using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;
     
    cout << "********************  CALCULATOR  ********************" << endl;

    cout << "Enter either (+ - * /): ";
    cin >> op;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result : " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result : " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result : " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "Result : " << result << endl;
            break;
        default:
            cout << "Please enter a valid operator(+ - * /)" << endl;
    }

    cout << "******************************************************" << endl;

    return 0;
}