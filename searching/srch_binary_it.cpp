// Binary search iterative 

#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
        int l = 0, h = N-1, mid;
        
        while(l <= h){
            mid = (l+h)/2;
            
            if(arr[mid] == K){
                return mid;
            }
            else if(arr[mid] > K){
                h = mid-1;
            }
            else if(arr[mid] < K){
                l = mid+1;
            }
        }

        return -1;
    }
};

int main(void) 
{ 

    int n, k;
    cin >> n >> k;
    
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    
    Solution ob;
    if(ob.searchInSorted(arr, n, k) == -1){
        cout << "Not found !" << endl;
    }
    else{
        cout << "Found at index : " << ob.searchInSorted(arr, n, k) << endl;
    }
    
	return 0; 
} 
