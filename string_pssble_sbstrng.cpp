#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    // For "01101" substrings = 11, 101, 1101
    long binarySubstring(int n, string a){
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '1'){
                count++;
            }
        }
        long sum = (count-1)*count; // formula to calculate all possible substrings
        return sum/2;
    }
};

int main()
{
    string a = "01101";
    int n = a.size();
    
    Solution obj;
    cout << obj.binarySubstring(n, a) << endl;
}