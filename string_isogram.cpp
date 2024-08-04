#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    //An Isogram is a string in which no letter occurs more than once.
    bool isIsogram(string s)
    {
        unordered_map <char, int> mp;
        
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
  
        for(int i = 0; i < s.size(); i++){
            if(mp[s[i]] > 1){
                return false;
            }
        }
        return true;
    }
};

int main()
 {
    string s = "machine";
    // string s = "programming";
    
    Solution obj;
    cout<<obj.isIsogram(s)<<endl;
       
	return 0;
}