#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    // Function is to check whether if there is anagram of pattern present in text 
    bool areSame(int* countA, int* countB)
    {
        for(int i = 0; i < 123; i++){
            if(countA[i] != countB[i]){
                return false;
            }
        }
        return true;
    }
    bool isAnagram(string& a, string& b) 
    {
        int countA[123] = {0} ;
        int countB[123] = {0} ;
        
        for(int i = 0; i < b.size(); i++){
            countA[a[i]]++;
            countB[b[i]]++;
        }
        for(int i = b.size(); i < a.size(); i++){
            if(areSame(countA, countB)){
                return true;
            }
            countA[a[i]]++;
            countA[a[i - b.size()]]--;
        }
        return true;
    }
};

int main()
{
    string a = "geeksforgeeks";  //text
    string b = "frog";           // pattern

    Solution obj;
    if(obj.isAnagram(a,b)){
        cout << "YES" <<endl;
    }
    else
        cout << "NO" <<endl;

    return 0;
}