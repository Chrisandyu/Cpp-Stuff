#include <iostream>

using namespace std;

int main(){
    
    //Switch: An alternative to using many "else if" statements
    //        compare one value against matching cases

    int month;
    cout << "Enter the month(1-12): ";
    cin >> month;

    switch(month){
        case 1:
            cout << "It is January" << endl;
            break;
        case 2:
            cout << "It is February" << endl;
            break;
        case 3:
            cout << "It is March" << endl;
            break;
        case 4:
            cout << "It is April" << endl;
            break;
        case 5:
            cout << "It is May" << endl;
            break;
        case 6:
            cout << "It is June" << endl;
            break;
        case 7:
            cout << "It is July" << endl;
            break;
        case 8:
            cout << "It is August" << endl;
            break;
        case 9:
            cout << "It is September" << endl;
            break;
        case 10:
            cout << "It is October" << endl;
            break;
        case 11:
            cout << "It is November" << endl;
            break;
        case 12:
            cout << "It is December" << endl;
            break;
        default:
            cout << "Please enter in only numbers 1-12" << endl;
    }

    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "You did great!" << endl;
            break;
        case 'B':
            cout << "You did good" << endl;
            break;
        case 'C':
            cout << "You did okay" << endl;
            break;
        case 'D':
            cout << "You did not do good" << endl;
            break;
        case 'F':
            cout << "You failed" << endl;
            break;
        default:
            cout << "Please only enter in a letter grade A-F" << endl;
    }

    return 0;
}