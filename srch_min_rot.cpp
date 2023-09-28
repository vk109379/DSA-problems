#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        int mid = (low + high)/2;
    
        if(arr[mid] < arr[mid - 1])
            return arr[mid];
            
        else if( arr[mid] >= arr[high] ){
           return minNumber(arr, mid+1 , high);
        }
        
        else if( arr[mid] <= arr[low] ){
            return minNumber(arr, low , mid-1);
        }
        
    }
};


int main()
{
	int arr[] = {6,11,24,37,42,3,5};
    int  high = sizeof(arr)/sizeof(arr[0]) - 1, low = 0;
    
    Solution obj;
	cout << obj.minNumber(arr, low, high) << endl;
	
	return 0;
}