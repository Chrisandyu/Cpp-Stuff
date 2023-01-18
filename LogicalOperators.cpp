#include <iostream>

using namespace std;

int main(){

    // && = check if the two conditions are true
    // || = check if at least one of the conditions are true
    // ! = reverses the logical state of its operand

    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    // if(temp > 0 && temp < 30){
    //     cout << "The temperature is good" << endl;
    // }else{
    //     cout << "The temperature is bad" << endl;
    // }

    if(temp <= 0 || temp >= 30){
        cout << "The temperature is bad" << endl;
    }else{
        cout << "The temperature is good" << endl;
    }

    bool sunny = true;
    //cout << "Is it sunny(true/false)? ";
    // cin >> sunny;
    cout << sunny << endl;

    if(sunny){
        cout << "It is sunny outside" << endl;
    }else{
        cout << "It is cloudy outside" << endl;
    }

    return 0;
}