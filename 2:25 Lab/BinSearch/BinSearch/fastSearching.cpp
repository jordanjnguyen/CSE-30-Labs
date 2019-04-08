#include <iostream>
#include "BinSearch.h"

using namespace std;

int main() {
    long size;
    cin >> size;
    
    long* numbers = new long[size];
    
    // This list is sorted
    for (long i = 0; i < size; i++) {
        numbers[i] = i;
    }
    
    cout << binSearch(numbers, size, size-1) << endl;
    cout << binSearch(numbers, size, size/2) << endl;
    cout << binSearch(numbers, size, 2) << endl;
   
    for(int i=0; i< size; i++) {
        cout << binSearch(numbers, size, i) << endl;
    }
    
    return 0;
}
