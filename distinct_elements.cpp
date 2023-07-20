//Remove duplicates from a sorted array

#include <bits/stdc++.h>
using namespace std;

int distinctval(int arr[], int n){
    int i, ptr =1;

    for(i=1; i<n; i++){
       
           if(arr[i] != arr[ptr-1]){
                arr[ptr] = arr[i] ;
                ptr ++;
            }        
    }
    return ptr;
}
int main() {
   int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   
    n = distinctval(arr, n);

   for(int i=0; i<n; i++){
    cout << arr[i] <<" ";
   }
   cout <<endl;

return 0;
}