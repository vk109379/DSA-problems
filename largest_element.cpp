#include <bits/stdc++.h>
using namespace std;

int getlargest(int arr[], int n){
    int max=0;
    for (int i = 0; i< n; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;
}
int main() {
   int arr[] = {5, 8, 34, 38, 20};
   int n = sizeof(arr)/sizeof(arr[0]);

   cout << getlargest(arr, n) <<endl;
return 0;
}