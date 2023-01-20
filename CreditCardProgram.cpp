#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int cNum;
    cout << "Enter credit card number: ";
    cin >> cNum;

    cout << cNum;

    return 0;
    for(int i = 0; i < 199; i++){
        if(i == 99){
            cout << "99 reached \n";
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }
}