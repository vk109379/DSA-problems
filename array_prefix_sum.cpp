/*

value of prefixSum[i] is arr[0] + arr[1] + arr[2] … arr[i].

Input  : arr[] = {10, 20, 10, 5, 15}
Output : prefixSum[] = {10, 30, 40, 45, 60}
*/

#include <bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[], int n, int prefix[])
{
    int i;
    int temp = arr[0];
    
    for(i = 0; i < n; i++){
         prefix[i] = temp;
        temp = prefix[i] + arr[i+1];
       
    }
}

int main() {
   int arr[] = {10, 20, 10, 5, 15} ;
   int n = sizeof(arr)/sizeof(arr[0]);
   int prefix[n];
   
   prefix_sum(arr, n, prefix);
   
   for(int i = 0; i < n; i++){
       cout << prefix[i] << " ";
   }
    
    return 0;
}