#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        int diff = abs(arr[0] - arr[1]);
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(i == j){
                    continue;
                }
                diff = min(diff, abs(arr[i] - arr[j]));
            }
        }
        return diff;
    }
};

//{ Driver Code Starts.
    
int main()
{
    int arr[] = {2, 4, 5, 9, 7};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;
    cout << ob.MinimumDifference(arr, n) << endl;

    return 0;;
}
// } Driver Code Ends