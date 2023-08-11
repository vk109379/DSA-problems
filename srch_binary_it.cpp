// Binary search iterative 

#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int Binary(int arr[], int N, int K) 
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

    int n;
    cout << "No. of elements in array : ";
    cin >> n;

    int arr[n];
    cout << "Input elements in array : ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k;
    cout << "Element to be searched in array : ";
    cin >> k;
    
    Solution ob;
    int index = ob.Binary(arr, n ,k);

    if(index == -1){
        cout << "Not found !" << endl;
    }
    else{
        cout << "Found at index : " << index << endl;
    }
    
	return 0; 
} 
