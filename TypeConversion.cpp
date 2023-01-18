#include <iostream>

using namespace std;

int main(){{
    /*
    Type conversion:  conversion of a value of one data type to another 
    Implicit = Automatic
    Explicit = Manual, Precede value with new data type(int, string, etc.)
    */

    int x = 3.14; //Implicit conversion to int
    double y = (int) 3.14; //Explicit

    cout << x << endl;
    cout << y  << endl;

    char z = 100; //Implicit, refer to ASCII for number - > letter conversion

    cout << z << endl;   //Implicit
    cout << (char) 100 << endl; //Explicit

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100; //use typeconversion in integer div

    cout << score << "%\n";

    return 0;

}}