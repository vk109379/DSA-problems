// Binary Search  recursive.

#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    int searchInSorted(int arr[],int l, int h, int K) 
    { 
            int mid = (l+h)/2;
            
            if(arr[mid] == K){
                return mid;
            }
            else if(arr[mid] > K){
                return searchInSorted(arr,l,mid-1, K);
            }
            else if(arr[mid] < K){
                return searchInSorted(arr,mid +1,h, K);
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
    cin>>k;
    
    int l = 0, h = n-1;

    Solution ob;
    if(ob.searchInSorted(arr, l, h , k) == -1){
        cout << "Not found !" << endl;
    }
    else{
        cout << "Found at index : " << ob.searchInSorted(arr, l, h, k) << endl;
    }
	return 0; 
} 