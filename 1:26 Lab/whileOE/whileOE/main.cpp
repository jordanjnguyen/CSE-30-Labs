#include <iostream>

int main() {
    
    int input;
    while(input != -1) {
        std::cin >> input;
        if(input == -1) {
            break;
        }
        else if(input % 2 == 0) {
            std::cout << "EVEN";
        }
        else {
            std::cout << "ODD";
        }
    }
    return 0;
}

