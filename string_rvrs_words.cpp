#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void revIt(string &S,int low, int high){ //function to reverse a word
        while(low < high){
            swap(S[low], S[high]);
            low++;
            high--;
        }
    }
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int start = 0;
        int n = S.size();
        string str;
        
        for(int i = 0; i < S.size(); i++){
            str.push_back(S[i]);
        }
        for(int i = 0; i < n; i++){    
            if(str[i] == ' '){
                revIt(str, start, i-1);      //reverse every word
                start = i + 1;
            }
        }
        revIt(str, start, n-1);   // reverse last word
        revIt(str, 0, n-1);       // reverse whole string
        
        return str;
    } 
};

int main() 
{
    string s = "i like this program very much";

    Solution obj;
    cout<<obj.reverseWords(s)<<endl;
}