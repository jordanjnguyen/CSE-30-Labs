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
    
    /* //prints words
     for (int i = 0; i < words.size(); ++i) {
     std::cout << words.at(i) << std::endl;
     
     }*/
    
    //cout << words.size() << endl;

    for(int i = 0; i < words.size() ; i++) {
        for(int j = 0; j < words[i].length(); j++) {
            words[i][j] = tolower(words[i][j]);
        }
    }
    
    for(int i = 0; i < ask.size() ; i++) {
        ask[i] = tolower(ask[i]);
    }
    
    /*for (int i = 0; i < words.size(); ++i) {
        std::cout << words.at(i) << std::endl;
        
    }*/
    //cout << "ask"+ ask;
    
    
    for(int i = 0; i < words.size() ; i++) {
        if(words[i] == ask ) {
            num++;
        }
        else if(words[i].substr(0,words[i].length()-1) == ask) {
            if(ispunct(words[i][words[i].length()-1]) != 0) {
                num++;
            }
            
        }
       
        /* else if(words[i].substr(1,words[i].length()) == ask) {
            num++;
        }*/
    }
    cout << num << endl;
    
    return 0;
    
}

