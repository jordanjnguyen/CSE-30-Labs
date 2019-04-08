#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occurrences(Node* root, int value){
    // Provide your code here
    Node* temp = root;
    int count = 0;
    while(temp != NULL){
        if(temp->data <= value){
            if(temp->data == value){
                count++;
                //std::cout<< "equals" << std::endl;
            }
            //std::cout<< "right" << std::endl;
            temp = temp->right;
        }
        else{
            //std::cout<< "left" << std::endl;
            temp = temp->left;
        }
    }
   
    return count;
}

#endif
