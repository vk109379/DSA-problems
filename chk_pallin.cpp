// this program check whether given string pallindrome or not.
    


#include <bits/stdc++.h>
using namespace std;

bool pallin(string str, int s, int e){
    
    if(e - s + 1 == 1 || e < 0){
        
        return true;
    }
    else
    {
        if(str[s] == str[e])
        {
            return pallin(str, s+1, e-1);
        }
        else 
        {
            return false;
        }
    }
};

int main() {
    
string str = "oooo";
int len = str.size();


    if(pallin(str, 0 , len-1))
    {
      cout << "Yes";   
    }
    else
    {
        cout << "No";
        
    }
    return 0;
}