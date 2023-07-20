#include <bits/stdc++.h>
using namespace std;

int getlargest(int arr[], int n){
    int max=0, prev=-1;
    for (int i = 0; i< n; i++){
       
        if(arr[i] > arr[max]){
            prev = max;
            max = i;
        }
         if(arr[i] > arr[prev] && arr[i] < arr[max]){
            prev = i;
        }
    }
    return prev;
}
int main() {
   int arr[] = {12, 35, 1, 10, 34, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int second = getlargest(arr, n);

   if(second > 0)
   cout <<"The 2nd largest element in array is at index " << second <<endl;
   else
   cout << "There is no largest element" <<endl;
return 0;
}