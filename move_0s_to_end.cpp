//moves all zero to the end of array

#include <bits/stdc++.h>
using namespace std;

void thereitgoes(int arr[], int n){
    int i, ptrr =0;

    for(i=0; i<n; i++){
        if(arr[i] != 0){
            ptrr ++;
            swap(arr[ptrr-1] ,arr[i] );
                
        }        
    }
}
int main() {
   int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
   int n = sizeof(arr)/sizeof(arr[0]);

  thereitgoes(arr, n);

  for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
   cout <<endl;

return 0;
}