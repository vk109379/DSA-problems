#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string& a, string& b) 
    {
        int count[123] = {0} ;
        
        if(a.size() != b.size()){
            return false;
        }
        for(int i = 0; i < a.size(); i++){
            count[a[i]]++;
            count[b[i]]--;
        }
        for(int i = 0; i < 123; i++){
            if(count[i] != 0){
                return false;
            }
        }
        return true;
    }
};

int main()
{
    string a = "allergy";      //false
    string b = "allergic";
    
    // string a = "geeksforgeeks";    //true
    // string b = "forgeeksgeeks";
    
    // string a = "aabaa";   //false (size diff.)
    // string b = "baaaaa";
    
    Solution obj;
    cout<<obj.isAnagram(a,b)<<endl;

    return 0;
}