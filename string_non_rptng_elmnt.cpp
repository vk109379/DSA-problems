#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       int exist[256];
        
        fill(exist, exist +256, -1);  //fill array elements to -1
        int res = S.size(); 
        
        for(int i = 0; i < S.size(); i++){
            if(exist[S[i]] == -1){
                exist[S[i]] = i;
            }
            else if(exist[S[i]] > -1){
                exist[S[i]] = -2;
            }
        }
        
        for(int i = 0; i < 256; i++){
            if(exist[i] < res && exist[i] >= 0){
                res = exist[i];
            }
        }
        
        return (res == S.size()) ? '$' : S[res];
       
    }

};

int main() {
    string S = "zxvczbtxyzvy";
    // string S = "zxvczbtxyzvcbty";
    
    Solution obj;
    char ans = obj.nonrepeatingCharacter(S);
    
    if(ans != '$')
	   cout << ans;
    else cout << "All elements are repeating :(";
        
    cout << endl;
	
	return 0;
}

// } Driver Code Ends