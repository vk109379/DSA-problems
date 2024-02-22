#include <bits/stdc++.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        int ptr = n-1, i;
        for(i = 0; i < n-1; i++){
            for(int j = 1; j <= ptr; j++){
                if(arr[j-1] > arr[j])
                {
                    swap(arr[j-1], arr[j]);
                }
            }
            ptr--;
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
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;;
}