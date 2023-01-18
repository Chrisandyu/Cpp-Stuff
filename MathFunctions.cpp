#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x = 3;
    double y = 4;
    double z;

    //Max function  max()
    z = max(x, y);
    cout << z << endl;

    //Min function   min()
    z = min(x, y);
    cout << z << endl;

    //All the functions below need cmath
    //Power  pow()
    z = pow(x, y);
    cout << z << endl;

    //Square root function  sqrt()
    z = sqrt(y);
    cout << z << endl;

    //Absolute value  abs()
    z = -4;
    z = abs(z);
    cout << z << endl;

    //Round function  round()
    z = 3.14;
    z = round(z);
    cout << z << endl;

    //Ceiling function  ceil()
    z = 3.14;
    z = ceil(z);
    cout << z << endl;

    return 0;
}

