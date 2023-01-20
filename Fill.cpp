#include <iostream>

using namespace std;

int main(){


    const int size = 99;
    string foods[100];

    fill(foods, foods + size / 3, "pizza");
    fill(foods + size / 3, foods + size * 2 / 3, "hamburgers");
    fill(foods + size * 2 / 3, foods + size, "hotdogs");

    for(string food : foods){
        cout << food << '\n';
    }

    return 0;

}
