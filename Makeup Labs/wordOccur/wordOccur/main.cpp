#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

using namespace std;


int main() {
    
    //used http://www.cplusplus.com for help
    
    vector <string> words;
    string str;
    string ask;
    int num = 0;
    
    cin >> ask;
    
    ifstream in("words.txt");
    
    while (in >> str) {
        words.push_back(str);
    }
    
    in.close();
    
    for(int i = 0; i < words.size() ; i++) {
        for(int j = 0; j < words[i].length(); j++) {
            words[i][j] = tolower(words[i][j]);
        }
    }
    
    for(int i = 0; i < ask.size() ; i++) {
        ask[i] = tolower(ask[i]);
    }

    for(int i = 0; i < words.size() ; i++) {
        if(words[i] == ask ) {
            num++;
        }
        else if(words[i].substr(0,words[i].length()-1) == ask) {
            if(ispunct(words[i][words[i].length()-1]) != 0) {
                num++;
            }
        }
    }
    cout << num;
    
    return 0;
    
}

