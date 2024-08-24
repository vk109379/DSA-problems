//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        vector <int> result;
        int a = 0, b = 0, c = 0;
        int size = A.size() + B.size() + C.size();
        
        for(int i = 0; i < size; i++){
            
            if( A[a] <=  min( C[c], B[b]) && a < A.size()){
                result.push_back(A[a]);
                a++;
                if(a == A.size())
                   A[a] = INT_MAX;
            }
            if( B[b] <= min( C[c], A[a]) && b < B.size()){
                result.push_back(B[b]);
                    b++;
                if(b == B.size())
                    B[b] = INT_MAX;
            }
            if( C[c] <= min( A[a], B[b]) && c < C.size()){
                result.push_back(C[c]);
                    c++;
                if(c == C.size())
                    C[c] = INT_MAX;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    vector<int> A = {1,2,3,4};
    vector<int> B = {1,2,3,4,5};
    vector<int> C = {1,2,3,4,5,6};
    
    Solution obj;
    vector <int> ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
   
    return 0; 
} 

// } Driver Code Ends