// check whether the pattern is present or not in the given string. 
/*
IP :axzy
    xy
OP : Not present
IP :abcdefh
    bcd
OP : present
*/


#include <bits/stdc++.h>
using namespace std;

bool searchPattern(string str, string pat)
{
    int plen = pat.size();
    int slen = str.size();
    bool is = false;
    
    for(int i = 0; i <= slen - plen; i++)
    {
        if(str[i] == pat[0])
        {
            for(int j = 0; j < plen; j++)
            {
                
                is = false;
                
                if(str[i+j] == pat[j])
                {
                    is = true;
                }
                if(!is)
                {
                    break;
                }
            }
            
            if(is)
            {
                break;
            }
            
            is = false;
        }
    }
    
    if(is)
    return true;
    
    else
    return false;
}

int main()
{
    string str, pat;
    cin>>str;
    cin>>pat;
    
    if(searchPattern(str, pat) == true)
        cout << "Present" <<endl;
    else cout << "Not present" <<endl;
    
    return 0;

}