#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to merge the two sorted subarrays.
    void merge(int arr[], int l, int mid, int h)
    {
        int ptr1 = l,ptr2 = mid + 1;
        vector <int> v;
        
        while(ptr1 <= mid && ptr2 <=h){
            if(arr[ptr1] <= arr[ptr2]){
                v.push_back(arr[ptr1]);
                ptr1++;
            }
            else{
                v.push_back(arr[ptr2]);
                ptr2++;
            }
        }
        while(ptr1 <= mid){
            v.push_back(arr[ptr1]);
                ptr1++;
        }
        while(ptr2 <= h){
            v.push_back(arr[ptr2]);
                ptr2++;
        }
        for(int i = 0; i<= h; i++){
            arr[i] = v[i];
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
    int arr[] = { 1, 3, 4, 5, 2, 4, 6, 8};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, mid = (n-1)/2, high = n-1;
    
    Solution ob;  
      
    ob.merge(arr, low, mid, high);
    printArray(arr, n);
    
    return 0;
}