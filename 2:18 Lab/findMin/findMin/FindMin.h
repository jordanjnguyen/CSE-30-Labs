#ifndef FindMin_h
#define FindMin_h
using namespace std;

// Declare and define the findMin function here
int findMin(int numbers[], int start, int end) {
    
    int min = numbers[start];
    int minPos = start;

    
    for(int i = start; i < end; i++) {
        
        if(numbers[i] < min) {
            min = numbers[i];
        }
        
    }
    
    return minPos;
}

// Do not write any code below this line
#endif
