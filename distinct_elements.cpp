#include <bits/stdc++.h>
using namespace std;

void distinct(int arr[], int n){
    int i, ptr = 0;
    int mid;
    for(i=0; i<n; i++){
       
           if(arr[i+1] == arr[ptr] && flag == 0){
                int flag = 1
                ptr =i+1;
            }
        
        else if(arr[i+1] != arr[i] && flag == 1){
            arr[i+1] = arr[ptr]
        }
            
        
    }
}
int main() {
   int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   distinct(arr, n);

   for(int i=0; i<n; i++){
    cout << arr[i] <<" ";
   }
   cout <<endl;

return 0;
}