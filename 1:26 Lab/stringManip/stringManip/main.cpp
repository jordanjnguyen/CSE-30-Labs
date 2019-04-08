#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {

    string input;
    vector <string> words;
    
    while(input != "quit") {
        
        cin >> input;
        
        if(input.length() != 1) {
            words.push_back(input);
        }
        else if(input.length() == 1) {
            for(int i=0; i<words.size(); i++) {
                if(words[i].substr(0,1) == input) {
                    cout << words[i];
                    //cout << "test" << endl;
                }
        }
        }
    }
    return 0;
}
