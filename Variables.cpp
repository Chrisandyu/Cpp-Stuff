#include <iostream>

int main(){

    int x; //declaration
    x = 5; 
    int y = 6;
    int sum = x + y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;

    //integer(whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;

    //double(number including decimals)
    double price = 10.99;
    double gpa = 2.98;
    double temperature = 25.1;

    std::cout << days << std::endl; //decimal stored as int is rounded down
    std::cout << price << std::endl;

    //single character
    char grade = 'A';
    char initial = 'BC';

    std::cout << initial << std::endl; //last character is displayed if more than one character
    std::cout << grade << std::endl;

    //boolean(true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //string(object that represents  a sequence of text)
    std::string name = "chris";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "859 Ferngrove Dr.";

    std::cout << name << std::endl;
    std::cout << "Hello " << std::endl;
    std::cout << "You are 20 years old" << std::endl;

    //const keyword: CANNOT BE MODIFIED
    const double PI = 3.1415;
    double radius = 10;
    double circumfrence = 2 * PI * radius;
    const int LIGHTSPEED = 2999792458;
    const int WIDTH = 20;
    const int  HEIGHT = 100;

    std::cout << circumfrence << "cm";

    return 0;

}