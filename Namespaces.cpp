    #include <iostream>

    namespace first{
        int x = 1; 
    }

    namespace second{
        int x = 2;
    }

    int main(){
        /* 
        Namespace: provides a solution for preventing name conflicts
        in large projects. Each entity needs a unique name. A namespace
        allows for identically named entities as long as the namespaces
        are different. 
        */

       using namespace first; //makes is so that every instance of x is always namespace first
       std::cout << x << std::endl;

       int x = 0;
       //cant do int x = 0 again because each entity needs a unqiue name;

        std::cout << first::x << std::endl;
        std::cout << second::x << std::endl;
        std::cout << x << std:: endl; //prints out the local "x"

        
        // using namespace std; makes it so that you dont have to type std before cout,
        // string, and everything in the standard library

        return 0;
    }