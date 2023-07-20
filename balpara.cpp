//this program checks the given expression of parantheses are balanced or not.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> str;
    string exp = "[{}()]{}";
    int flag = 0, i, j;
    

    for(i=0 ; i < exp.length() ; i++){
        if(exp[i] == '[' || exp[i] == '{' || exp[i] == '(' ){
            
            str.push(exp[i]);
            flag += 1;
        }
        
        //checking closed paranthesis
        
        else if(exp[i] == ']' || exp[i] == '}' || exp[i] == ')' ){

            if(!str.empty()){
            
                if(exp[i] == ')' && str.top() == '('  ){
                    str.pop();
                    flag -= 1;
                }

                else if(exp[i] == '}' && str.top() == '{'  ){
                    str.pop();
                    flag -= 1;
                }

                else if(  exp[i] == ']' && str.top() == '['){
                    str.pop();
                    flag -= 1;
                }
            }
            else {
                cout <<"Unbalanced Bruh!"<<endl;
                flag = -2;
                break;
            }        
        } 
    }
    
    if (flag == 0){
        cout<<"Balanced ! As all things should be in this Universe."<<endl;
    }
    else if(flag != -2){
        cout <<"Unbalanced Bruh!"<<endl;
    }

    return 0;
}
