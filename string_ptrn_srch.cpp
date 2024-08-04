#include<bits/stdc++.h>
using namespace std;

int strstr(string& ,string&);

int main(){
    string s = "ababaaaaaa";
    string x = "abaa";
    
    cout<<strstr(s, x)<<endl;
}

//Function to locate the occurrence of the string x in the string s.
// Naive approach
int strstr(string& s, string& x)
{
    int n = s.size(), m = x.size();
    int j;
    
    if(m > n){
        return -1;
    }
    
    for(int i = 0; i <= n-m; i++){
        for( j = 0; j < m; j++){
            if(x[j] != s[i+j]){
                break;
            }
        }
        if(j == m){
            return i;
        }
    }
    
    return -1;
}