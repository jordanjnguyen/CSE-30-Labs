#include <iostream>
#include <string>

int main() {
    
    std::string input;
    int num;

    std::getline(std::cin, input);
    std::cin >> num;
    
    for(int i = 0; i<num ; i++) {
        
        std::cout << input << std::endl;

    }
    
    return 0;
}
