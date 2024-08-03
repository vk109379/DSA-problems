#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> uni;
        int i = 0, j = 0;
        int prev = INT_MAX;
        
        while(i < n && j < m){
            int temp = min(arr1[i], arr2[j]);
            
            if(temp != prev)
                uni.push_back(temp);
            
            if(arr1[i] < arr2[j]){
                i++;
            }
            else if(arr1[i] > arr2[j]){
                j++;
            }
            else{
                i++;
                j++;
            }
            prev = uni.back();
        }
        
        for(i; i < n; i++){
            if(arr1[i] != prev){
                uni.push_back(arr1[i]);
                prev = arr1[i];
            }
        }
        for(j; j < m; j++){    
            if(arr2[j] != prev){
                uni.push_back(arr2[j]);
                prev = arr2[j];
            }
        }
        return uni;
    }
};

int main() {
	int arr1[] = {-9, -4, -1, -1, 0, 0, 5, 6, 8};
	int arr2[] = {-7, -7, -6, -5, 4, 5};
    int  n = sizeof(arr1)/sizeof(arr1[0]);
    int  m = sizeof(arr2)/sizeof(arr2[0]);
	
    Solution ob;
    vector<int> ans = ob.findUnion(arr1,arr2, n, m);
    
    for(int i: ans)cout<<i<<' ';
    cout << endl;
	
	return 0;
}