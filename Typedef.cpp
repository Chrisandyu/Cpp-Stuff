#include <iostream>
#include <vector>

using namespace std;

//typedef string string_t;
//typedef int number_t;
//typedef vector<pair<string, int>> pairlist_t; all instances of "vector<pair<string, int>> pairlist_t"
                                              //are replaced with "pairlist_t"
using string_t = string;
using number_t = int;
using pairlist_t = vector<pair<string_t, number_t>>;



int main(){

    pairlist_t plist;
    string_t name = "chris";
    number_t age = 18;

    cout << name << endl;
    cout << age << endl;

    return 0;
}

