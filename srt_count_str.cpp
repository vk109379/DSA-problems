#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        int n = arr.size();
        int cnt[26] = { };
        string out = arr ;
        
        for(int i = 0; i < n; i++){
            cnt[arr[i] - 97] += 1;
        }
        
        for(int i = 1; i < 26; i++){
            cnt[i] += cnt[i - 1];
        }
        
        for(int i = n -1; i >= 0; i--){
            out[cnt[arr[i] - 97] - 1] = arr[i];
            cnt[arr[i] - 97]--;
        }
        
        
        return out;
    }
};

int main()
{
    string arr = "comderultraproamax";
    
    Solution obj;
    cout<< obj.countSort(arr) <<endl;
    
    return 0;
}