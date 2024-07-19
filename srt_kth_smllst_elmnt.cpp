#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int partition(int arr[], int l, int h)
    {
        int i = l, j;
        int pivot = arr[l];
        
        for(j = l+1; j <= h; j++){    
            if(arr[j] <= pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[l], arr[i]);
        return i;
    }
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        int low = 0, high = n-1;
        int p;
        
        while(low <= high){
            p = partition(arr, low, high);
            
            if(p == k-1){
                return arr[p];
            }
            else if(p > k-1){
                high = p-1;
            }
            else{
                low = p+1;
            }
        }
        
    }
};

int main(){
	int arr[] = {5,2,8,6,1,9,4};
    int  n = sizeof(arr)/sizeof(arr[0]);    
	int k = 3;

	Solution ob;
	cout << ob.kthSmallest(arr, n, k) << endl; //print 3rd smallest element in array
	    
	return 0;
}