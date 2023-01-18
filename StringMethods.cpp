#include <iostream>

using namespace std;

int main(){

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    name.length();
    if(name.length() > 12){
        cout << "Your name can't be over 12 characters" << endl;
    }else if(name.empty()){
        cout << "You didn't enter your name" << endl;
    }else{
        cout << "Welcome " << name << endl;
    }

    //name.clear();
   // cout << "Hello, " << name << endl;

    name.append("@gmail.com");
    cout << "Your username is now " << name << endl;

    cout << name.at(0);

    name.insert(0, "@");
    cout << "Your NEWER name is " << name << endl;

    cout << name.find(" ");

    name.erase(0, 4);
    cout << "Your erased name is " << name << endl;

    return 0;
}