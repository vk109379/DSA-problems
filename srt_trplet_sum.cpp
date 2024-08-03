#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        int i, j, p;

        sort(arr, arr+n);
        
        for(p = 0; p < n-2; p++){
            j = p + 1;
            i = n-1;
            while(i > j){    
                if(arr[i] + arr[j] + arr[p]== x){
                    return true;
                }
                else if(arr[i] + arr[j] + arr[p] > x){
                    i--;
                }
                else{
                    j++;
                }
            }
        }
        return false;
    }
};

int main(){
    int arr[] = {1,4,45,6,10,8};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int x = 13;
    
    Solution ob;
        
    if(ob.find3Numbers(arr, n, x))
        cout << "YES" ;
    else
        cout << "NO";
    
    return 0;
}