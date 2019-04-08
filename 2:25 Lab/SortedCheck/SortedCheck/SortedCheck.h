#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){
    // Provide your code here...
    long min = list[0];
    
    for (int i = 0; i < size; i++) {
        if(min > list[i]) {
            return false;
        }
    }
    
    return true;
}

#endif 
