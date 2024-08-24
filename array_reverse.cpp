#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int i, j = n-1;

    for(i = 0; i < j; i++){
        swap(arr[i], arr[j]);
        j--;
    }
}
int main() {
   int arr[] = {8, 9, 10, 10, 12};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   reverse(arr, n);

   for(int i=0; i<n; i++){
    cout << arr[i] <<" ";
   }
   cout <<endl;

return 0;
}