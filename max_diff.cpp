//it is to find maximum difference between any two elements such that the larger element appears after the smaller number

#include <bits/stdc++.h>
using namespace std;

int maxd(int arr[], int n){
    int i, min = 0, md = 0;

        
    for(i=0; i<n; i++){
        if(arr[min] > arr[i]){
             min = i;
        } 
        if(md < arr[i] - arr[min]){
            md = arr[i] - arr[min];
        }
    }
    return md;
}

int main() {
   int arr[] = {2, 3, 10, 6, 4, 8, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   cout << maxd(arr, n) <<endl; 
    
    return 0;
}