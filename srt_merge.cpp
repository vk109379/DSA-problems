#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to merge the two sorted subarrays.
    void merge(int arr[], int l, int mid, int h)
    {
        int ptr1 = l, ptr2 = mid + 1;
        int f = l;
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
        for(int i = 0; i< v.size(); i++){
            arr[f] = v[i];
            f++;
        }
    }
    
    void MergeSort(int arr[], int low, int r){
        if(low < r){
            int mid = low + (r - low)/2;
            
            MergeSort(arr, low, mid);
            MergeSort(arr, mid + 1, r);
            merge(arr, low, mid, r);
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
    int arr[] = { 9,3,7,5,2,1,4,8,12,78,45,53,35,61,54,35,39};     
    int  n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = n-1;
    
    Solution ob;  
    ob.MergeSort(arr, low, high);
    
    printArray(arr, n);
    
    return 0;
}