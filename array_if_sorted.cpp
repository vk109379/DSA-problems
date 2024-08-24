// only checks ascending ordered array

#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int n){
    if(n <= 1){
        return true;
    }
    else if(n > 1){
        for(int i = 0; i < n; i++ ){
            if(arr[i+1] < arr[i]){
                return false;
            }
        }
        return true;
    }
   
}
int main() {
   int arr[] = {8, 9, 10, 10, 12};
   int n = sizeof(arr)/sizeof(arr[0]);
   

   if(issorted(arr,n))
   cout <<"Given array is sorted" << endl;
   else
   cout << "Not sorted" <<endl;
return 0;
}