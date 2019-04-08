#include <iostream>

int main() {
    
    int input;
    std::cin >> input;
    //std::cout << input/2;
    
    if(input % 2 == 0) {
        std::cout << "EVEN";
    }
    else {
        std::cout << "ODD";
    }
    
    return 0;
}
