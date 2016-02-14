// https://github.com/snowkit/hxcpp-guide/

#include <iostream>

int main() {

    #if BE_LESS_EXCITED
        std::cout << "hxcpp, hello.\n";
    #else
        std::cout << "Hello, hxcpp!\n";
    #endif

    return 0;
}