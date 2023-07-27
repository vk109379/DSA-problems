//this program checks the given expression of parantheses are balanced or not.

#include <bits/stdc++.h>

using namespace std;

bool ispara(string x)
{
    stack<char> str;
    
    if (x.length() == 1){
        return false;
    }
    
    for(int i=0 ; i < x.length() ; i++){
        if(x[i] == '[' || x[i] == '{' || x[i] == '(' ){
            
            str.push(x[i]);
        }
        
        //checking closed paranthesis
        
        else if(x[i] == ']' || x[i] == '}' || x[i] == ')' ){
            
            if(!str.empty()){
                
                if(x[i] == ')' && str.top() != '('  ){
                    return false;
                }
                
                else if(x[i] == '}' && str.top() != '{'  ){
                    return false;
                }
                
                else if(x[i] == ']' && str.top() != '['){
                    return false;
                } 
                
                str.pop();
            }
            else if(str.empty()){
                return false;
            }
        } 
    }
    if(str.empty()){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    string x = "{}{(}))}";
    
    if (ispara(x)){
        cout<<"Balanced ! As all things should be in this Universe."<<endl;
    }
    else {
        cout <<"Unbalanced Bruh!"<<endl;
    }

    return 0;
}
