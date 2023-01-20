#include <iostream>

using namespace std;

double getTotal(double prices[], int size);
int main(){

    double prices[] = {99.99, 213.10, 234.80, 77.00};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size); //Dont need the square brackets

    cout << "$" << total << endl;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}