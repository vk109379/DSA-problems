#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to sort the array using selection sort algorithm.
    void selectionSort(int arr[], int n)
    {
        int sml;
        
        for(int i = 0; i < n-1; i++){
            sml = i;
            for(int j = i+1; j < n; j++){
                if( arr[j] < arr[sml]){
                    sml = j;
                }
            }
            swap(arr[i], arr[sml]);
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
    int arr[] = {5,20,40,30,50,20};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;  
      
    ob.selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;;
}