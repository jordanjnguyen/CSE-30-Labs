#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


int main() {
    
    //used http://www.cplusplus.com/forum/general/34420/ for help
    
    vector <string> words;
    string str;
    
    ifstream in("words.txt");
    
    while (in >> str) {
        words.push_back(str);
    }
   
    in.close();
    
    /* prints words
    for (int i = 0; i < words.size(); ++i) {
        std::cout << words.at(i) << std::endl;
        
    }
    */
    cout << words.size() << endl;
    
    return 0;

}
