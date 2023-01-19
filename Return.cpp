#include <iostream>

using namespace std;

string concatStrings(string str1, string str2);
double square(double length);
double cube(double length);

int main(){

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    cout << "Area: " << area << "cm^2" << endl;
    cout << "Volume: " << volume << "cm^3" << endl;

    string firstName = "chris";
    string lastName = "zhang";

    cout << concatStrings(firstName, lastName) << endl;

    return 0;
}

double cube(double length){
    return length * length * length;
}

double square(double length){
    return length * length;
}

string concatStrings(string str1, string str2){
    return str1 + " " + str2;
}