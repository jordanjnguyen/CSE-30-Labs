#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void insertion_sort(long list[], long size){
    long n = size;
    for (long i = 1; i < n; i++) {
        long j = i;
        while (j > 0 && list[j-1] > list[j]){
            long temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j = j - 1;
        }
    }
}
void arrSort(long arr[], long size) {
    long count[1000];
    long num = 0;
    
    for(int i = 0; i < 1000; i++) {
        count[i] = 0;
    }
    
    for(int i = 0; i < size; i++) {
        count[arr[i]-1]++;
    }
    
    for(int i = 0; i< 1000; i++) {
        for(int j = 0; j < count[i]; j++) {
            arr[num] = (long)(i+1);
            num++;
        }
    }
}
void efficientRandomSortedList(long temp[], long s){
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
    uniform_distribution range = new_distribution(1, 1000);
    
    for (long i = 0; i < s; i++) {
        // At every cell of the array, insert a randomly selected number
        // from distribution defined above
        temp[i] = sample(range, device);
    }
    
    // Now sort the array using insertion_sort
    arrSort(temp, s);
}


#endif /* DataGen_h */
