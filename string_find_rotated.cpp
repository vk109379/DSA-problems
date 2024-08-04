#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string s3 = s1 + s1;
        if(s1.length() != s2.length()){
            return false;
        }
        
        return(s3.find(s2) != string::npos);
    }
};

int main()
{
    string s1 = "mightandmagic";
    string s2 = "andmagicmigth";
    
    Solution obj;
    cout<<obj.areRotations(s1,s2)<<endl;

    return 0;
}

// } Driver Code Ends