
#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k){
        int j, temp=0;
        
        for(int i=0; i<n; i+=k){
            temp = i+k;
            
            if(i+k>n){
                temp = n;
            }
             j = temp-1;
            
            for(int l = i; l<temp; l++){
                
                if(j <= l){
                    break;
                }
                
                else if(j > l){
                    swap(arr[l], arr[j]);
                    j--;
                }
            }
        }
            
    }

int main() {
   vector<long long> arr = {1,2,3,4,5};
   int n = arr.size();
   int k = 3;
   
    reverseInGroups(arr, n, k);

   for(auto x : arr){
        cout << x <<" ";
   }
   cout << endl;
    
    return 0;
}