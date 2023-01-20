#include <iostream>

using namespace std;

int main(){

    string students[] = {"bob", "joe", "momma", "joe bobo"};

    for(int i = 0; i < sizeof(students) / sizeof(string); i++){
        cout << students[i] << endl;
    }

    return 0;
}