/*
Print a sequence of numbers starting with N where A[0] = N, 
without using loop, in which  A[i+1] = A[i] - 5,  
until A[i] > 0. After that A[i+1] = A[i] + 5  
repeat it until A[i] = N.

Input: N = 16
Output: 16 11 6 1 -4 1 6 11 16
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
vector<int> arr;

int call(int N){
    if(N <= 0){
        arr.push_back(N);
        return N + 5;
    }
        
    arr.push_back(N);
    pattern(N-5);
    arr.push_back(N);
    
}
    vector<int> pattern(int N){
        
        call(N);
        
        return arr;
        
    }
};


int main(){
    
    int N;
    cin>>N;
    
    Solution ob;
    vector<int> ans = ob.pattern(N);
    for(int u: ans)
        cout<<u<<" ";
    cout<<"\n";

    return 0;
}
