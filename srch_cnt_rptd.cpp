#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n){
        int low = 0 ,high = n-1, mid;
        long times = 0;
        
        times = n - (arr[n-1] - arr[0]);
        
        if(times <= 1){
            return make_pair (-1, -1);
        }
        
        while(high > low){
            mid = (low+high)/2;
            
            if(arr[mid] == arr[mid-1] || arr[mid] == arr[mid+1]){
                return make_pair(arr[mid], times);
            }
            else if(arr[mid] >= mid + arr[0]){
                low = mid +1;
            }
            else if(arr[mid] < mid + arr[0]){
                high = mid -1;
            }
        }
        
        return make_pair (-1, -1);
    }
};

int main() {
    
    long arr[]= {2, 2, 2, 3, 4, 5};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    
    Solution obj;
    pair<long, long> ans = obj.findRepeating(arr,n);
    cout <<ans.first << " is occuring " << ans.second <<" times"<< endl;
    
}