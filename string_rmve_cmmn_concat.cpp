#include <bits/stdc++.h> 
using namespace std; 

class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        string res = "";
        int rpt[128] = {0};
        
        for(int i = 0; i < s1.length(); i++){
            rpt[s1[i]] = 1;         //setting occured elements as 1
        }
        for(int i = 0; i < s2.length(); i++){
            if(rpt[s2[i]] == 1){        //setting common elements as -1
                rpt[s2[i]] = -1;
            }
        }
        s1 = s1 + s2;
        for(int i = 0; i < s1.length(); i++){
            if(rpt[s1[i]] > -1){
                res.push_back(s1[i]);
            }
        }
        
        if(res.empty()){
            return "-1";
        }
        else
            return res;
    }

};

int main() 
{ 
    string s1 = "aacdb";
    string s2 = "cxzca";
    
    Solution obj;
    string res = obj.concatenatedString(s1, s2);
    cout<<res<<endl;
	return 0; 
}