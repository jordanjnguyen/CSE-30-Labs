#include <iostream>
#include "StringQueue.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    string name;
    bool quit = false;
    
    Queue myQ;
    
    while(quit != true) {
        cin >> input;
        
        if(input == "a") {
            cin >> name;
            myQ.push(name);
            cout << name << " arrived" << endl;
        }
        else if(input == "s") {
            if(myQ.isEmpty() == true) {
                cout << "No customers waiting" << endl;
            }
            else {
                // ?????? :
                cout << "Now serving: " << myQ.pop() << endl;
            }
        }
        else if(input == "n") {
            if(myQ.isEmpty() == true) {
                cout << "The waiting list is empty" << endl;
            }
            else {
                cout << "Next in line: " << myQ.peek() << endl;
            }
        }
        else if(input == "q") {
            if(myQ.isEmpty() == false) {
                cout << "Come back tomorrow:" << endl;
                while(myQ.isEmpty() == false) {
                    cout << myQ.pop() << endl;
                }
            }
            cout << "Closing up now.";
            quit = true;
        }
        else {
            
        }
    }
    
    return 0;
}
