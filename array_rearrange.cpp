// program to rearrange an array so that arr[i] becomes arr[arr[i]]
// with O(1) extra space.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void arrange(int arr[], int n) {
        
        for(int i = 0; i < n; i++){
            arr[i] += ((arr[arr[i]] % n) * n) ;
        }
        
        for(int i = 0; i < n; i++){
            arr[i] /= n;
        }
    }
};


//{ Driver Code Starts.

int main(){
    int A[] = {3, 2, 0, 1} ;
    int n = sizeof(A)/sizeof(A[0]);

        Solution ob;

        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    return 0;
}
