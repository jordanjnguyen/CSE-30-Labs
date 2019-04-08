#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

using namespace std;

struct Node {
    long data;
    
    Node* left;
    Node* right;
};

void merge(long arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    
    ///* create temp arrays /
     int L[n1], R[n2];
     
     // Copy data to temp arrays L[] and R[] /
     for (i = 0; i < n1; i++)
     L[i] = arr[l + i];
     for (j = 0; j < n2; j++)
     R[j] = arr[m + 1+ j];
     
     // Merge the temp arrays back into arr[l..r]/
     i = 0; // Initial index of first subarray
     j = 0; // Initial index of second subarray
     k = l; // Initial index of merged subarray
     while (i < n1 && j < n2)
     {
     if (L[i] <= R[j])
     {
     arr[k] = L[i];
     i++;
     }
     else
     {
     arr[k] = R[j];
     j++;
     }
     k++;
     }
     
     // Copy the remaining elements of L[], if there are any /
     while (i < n1)
     {
     arr[k] = L[i];
     i++;
     k++;
     }
     
     // Copy the remaining elements of R[], if there are any /
     while (j < n2)
     {
     arr[k] = R[j];
     j++;
     k++;
     }
     }
     
     // l is for left index and r is right index of the
     //sub-array of arr to be sorted */
    void mergeSort(long arr[], int l, int r)
    {
        if (l < r)
        {
            // Same as (l+r)/2, but avoids overflow for
            // large l and h
            int m = l+(r-l)/2;
            
            // Sort first and second halves
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            
            merge(arr, l, m, r);
        }
    }

Node* GetNewNode(long data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, long data) {
    if(root == NULL) {
        root = GetNewNode(data);
    }
    else if(data <= root->data) {
        root->left = insert(root->left,data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}
void traverse(Node* root, long temp[], int & i) {
    if (root != NULL){
        traverse(root->left, temp, i);
        temp[i] = (root->data);
        i++;
        traverse(root->right, temp, i);
    }
}
void traverse2(Node* root, long temp[], int i) {
    if (root != NULL){
        traverse2(root->left, temp, i);
        cout << root->data << endl;
        traverse2(root->right, temp, i);
    }
}
long AddToArray(Node* root, long temp[], long i) {
    if(root == NULL)
        return i;
    
    temp[i] = root->data;
    i++;
    if(root->left != NULL)
        i = AddToArray(root->left, temp, i);
    if(root->right != NULL)
        i = AddToArray(root->right, temp, i);
    
    return i;
}

long binSearch(long list[], long n, long val) {
    long l = 0;
    long r = n - 1;
    long mid = 0;
    
    while(l <= r) {
        mid = (l+r)/2;
        
        if(val <= list[mid]) {
            r = mid -1;
        }
        else if(val > list[mid]) {
            l = mid +1;
        }
        else {
            return mid;
        }
    }
    return mid;
}

void insertion_sort(long list[], long size) {
    long n = size;
    for (long i = 1; i < n; i++) {
        long j = i;
        while (j > 0 && list[j-1] > list[j]) {
            long temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j = j - 1;
        }
    }
}
void qSort(long arr[], long left, long right) {
    long i = left, j = right;
    long tmp;
    long pivot = arr[(left + right) / 2];
    
    /* partition */
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
    /* recursion */
    if (left < j)
        qSort(arr, left, j);
    if (i < right)
        qSort(arr, i, right);
}


void efficientRandomSortedList(long temp[], long s) {
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
    uniform_distribution range = new_distribution(1, 1000);
    
    
    long num;
    int index = 0;
    
    ////////binsearch////////////////////////////////////////
    /*for (long i = 0; i < s; i++) {
        // At every cell of the array, insert a randomly selected number
        // from distribution defined above
        num = sample(range, device);
        
        index = binSearch(temp, s, num);
        
        for(long j = i; j>index; j++) {
            temp[j] = temp[j-1];
        }
        
        temp[index] = num;
        //temp[i] = sample(range, device);
    }
    //////////////////////////////////////////////////////////
    
    // Now sort the array using insertion_sort
    //insertion_sort(temp, s);
    
    //qSort(temp, 0, s);
     */
    
    ////////////////BST///////////////////////////////////
    Node* root = NULL;
    //cout <<&temp;
    
    for(long i = 0; i < s; i++ ) {
        num = sample(range, device);
        root = insert(root,num);
    }
    traverse(root, temp, index);
    //traverse2(root, temp, 0);
    //////////////////////////////////////////////////////
    mergeSort(temp,0,s-1);
}


#endif /* DataGen_h */
