#include <iostream>

using namespace std;

int main(){

    string students[] = {"me", "myself", "I", "yoyo ma"};

    for(string i : students){
        cout << i << endl;
    }

    return 0;
}