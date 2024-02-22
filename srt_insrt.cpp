#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int ptr, key;
        
        for(int i = 1; i < n; i++){
            ptr = i-1;
            key = arr[i];
            
            while(key < arr[ptr] && ptr >=0){
                arr[ptr+1] = arr[ptr];
                ptr--;
            }
            arr[ptr+1] = key;
        }
    }
};

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;  
      
    ob.insertionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}