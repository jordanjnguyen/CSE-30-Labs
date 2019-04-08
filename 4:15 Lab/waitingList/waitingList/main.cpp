#include <iostream>
#include "StringQueue.h"

using namespace std;


int main(int argc, const char * argv[]) {
    char input;
    string name;
    bool quit = false;
    
    Queue* myQ = new Queue;
    
    while(quit != true) {
        cin >> input;
        
        if(input == 'a') {
            cin >> name;
            myQ->push(name);
            cout << name << " arrived" << endl;
        }
        else if(input == 's') {
            if(myQ->isEmpty() == true) {
                cout << "No customers waiting" << endl;
            }
            else {
                name = myQ->pop();
                // ?????? :
                cout << "Now serving: " << name << endl;
            }
        }
        else if(input == 'n') {
            if(myQ->isEmpty() == true) {
                cout << "The waiting list is empty" << endl;
            }
            else {
                name= myQ->peek();
                cout << "Next in line: " << name;
            }
        }
        else if(input == 'q') {
            if(myQ->isEmpty() == false) {
                cout << "Come back tomorrow:" << endl;
                while(myQ->isEmpty() == false) {
                    cout << myQ->pop() << endl;
                }
            }
            cout << "Closing up now.";
            quit = true;
            delete myQ;
        }
        name = "";
    }
    
    return 0;
}
