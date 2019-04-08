#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val) {
    // Provide your code here
    if(n == 1) {
        if(*list == val) {
            return 0;
        }
        else {
            return -1;
        }
    }
    
    long* mid = &list[n/2];
    
    if(*mid == val) {
         return n/2;
    }
    else {
        if(*mid > val) {
            return binSearch(list, n/2, val);
        }
        else {
            long extra = 0;
            if(n%2 ==0) {
                extra = 1;
            }
            long returnValue = binSearch(&mid[1], n/2 - extra, val);
            if(returnValue == -1) {
                return -1;
            }
            else {
                //std::cout << "num: " + n/2 +returnValue+1;
                return n/2 +returnValue+1;
            }
        }
    }
}

#endif
