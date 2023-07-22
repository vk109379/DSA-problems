// program to print all leaders in an array
// leader is element which is greatest to all of the right side elements in an array


#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n){
    int i, ptr = n-1;
        cout << arr[ptr] <<" ";
        
    for(i=n-1; i>=0; i--){
        if(arr[i] > arr[ptr]){
             ptr = i;
            cout << arr[ptr] <<" ";
            
        } 
    }
}

int main() {
   int arr[] = {7,10,4,3,6,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   
    leader(arr, n);
    
    return 0;
}