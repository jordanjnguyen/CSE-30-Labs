#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int input;
    bool prime = true;
    cin >> input;
    
    for(int i = 2; i < input; i++) {
        for(int j = 2; j < i; j++) {
            if(i%j == 0) {
                prime = false;
            }
        }
        if(prime == true) {
            cout << i << endl;
        }
        prime = true;
    }
    
    return 0;
}
