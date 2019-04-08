#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string input;
    int num = 0;

    while(num != -2) {
        cin >> input;
        cin >> num;
        
        if(num == -1) {
            cout << endl;
        }
        else {
            for(int i = 0; i< num; i++) {
                cout << input;
            }
        }
    }
   
    
    
    return 0;
}
