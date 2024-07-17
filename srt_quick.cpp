#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Quick sort algorithm using hoare partioning method.
    int partition(int arr[], int l, int h){
        int i = l-1, j = h+1;
        int pivot = arr[l];
        
        while(true){
            do{
                i++;
            }
            while(arr[i] < pivot);
            
            do{
                j--;
            }
            while(arr[j] > pivot);
            
            if(i >= j){
                return j;
            }
            swap(arr[i], arr[j]);
        }
        
    }
    
    void qSort(int arr[], int l, int h){
        if(l<h){
            int p = partition(arr, l, h);
            qSort(arr, l, p);
            qSort(arr, p+1, h);
        }
    }
};

int main(){
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10, 5, 7, 12, 63, 0, 3, 25};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int l = 0, h = n-1;
    
    Solution ob;
    ob.qSort(arr, l, h);
    
    for(int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }

    return 0;
}