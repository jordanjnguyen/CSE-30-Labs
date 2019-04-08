#include <iostream>
#include "BST.h"
#include "RandomSupport.h"
#include "BSTUtil.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Node* root = NULL;
    long num;
    
    cin >> num;
    
    randomizer device = new_randomizer();
    uniform_distribution range = new_distribution(1, 9999999999);
    
    for (int i = 0; i< num; i++){
        root = insert(root, sample(range, device));
    }
    
///////UNCOMMENT WHEN SUBMITTING/////////
//    root = insertSpecialNumber(root);
//    findSpecialNumber(root);
/////////////////////////////////////////
    
////////////////TEST/////////////////////
    insert(root, 999999983.6);
    search(root, 999999983.6);
/////////////////////////////////////////
    
    //drawTree(root);
    
    return 0;
}
