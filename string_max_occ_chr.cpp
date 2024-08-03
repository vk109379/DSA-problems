#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        unordered_map <char, int> mp;
        int rpt = 0;
        char max = str[0]; // lexicographically smaller character
        
        for(int i = 0; i < str.size(); i++){
            mp[str[i]]++;
        }
        
        for(int i = 0; i < str.size(); i++){
            if(mp[str[i]] > rpt){
                rpt = mp[str[i]];
                max = str[i];
            }
            else if(mp[str[i]] == rpt){
                max = min(str[i], max);
            }
        }
        return max;
    }
};

int main()
{
    string str = "outputsample";//output will be p since it is lexicographically smaller than t

    Solution obj;
    cout<< obj.getMaxOccuringChar(str)<<endl;
}