#include <iostream>
#include "OpStack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    long total = 0;
    char input = NULL;
    int num = 0;
    Stack* myStack = new Stack();
    
    while(input != 'q') {
        cin >> input;
        
        if(input == 'a') {
            //add
            cin >> num;
            total += num;
            myStack->push(num, input);
            cout << "Total: " << total << endl;
        }
        else if(input == 's') {
            //subtract
            cin >> num;
            total -= num;
            myStack->push(num, input);
            cout << "Total: " << total << endl;
        }
        else if(input == 'z') {
            //undo
            if(myStack->isEmpty()) {
                cout << "Nothing to undo..."<< endl;
            }
            else {
                Link* temp = myStack->pop();
                
                if(temp->op == 'a') {
                    total -= temp->data;
                    cout << "Total: " << total << endl;
                }
                else if(temp->op == 's') {
                    total += temp->data;
                    cout << "Total: " << total << endl;
                }
                delete temp;
                
            }
        }
        
        num = 0;
    }
    return 0;
}
