#ifndef HashTable_h
#define HashTable_h
#include "Queue.h"
#include <iostream>
#include <vector>

struct HashTable {
    long size;
    std::vector<Queue*> hashtable;
    
    HashTable() {
        size = 10;
        for(long i = 0; i < size; i++) {
            hashtable.push_back(new Queue());
        }
    }
    HashTable(long k) {
        size = k;
        for(long i = 0; i < size; i++) {
            hashtable.push_back(new Queue());
        }
    }
    int hash(long num) {
        long index = num % size;
        return index;
    }
    void insert(long num) {
        hashtable[hash(num)]->push(num);
    }
    void print() {
        for(long i = 0; i < size; i++) {
            Queue* current = hashtable[i];
            std::cout << i << ": ";
            current->print();
            std::cout << std::endl;
        }
    }
    bool find(int val) {
        long index = hash(val);
        Queue* current = hashtable[index];
       
        if (current->find(val) == true) {
            return true;
        }
        else {
            return false;
        }
    }
    
};

#endif /* HashTable_h */
