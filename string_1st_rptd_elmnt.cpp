#include <bits/stdc++.h>
using namespace std;

//Program to print first occured repeated element in string 
int main()
{
 
    string str = "vinaykumar";       //       \   
    //string str = "abcd";                     \
    //string str = "coaiwnfwaiocwoahcoa";       \    Test cases :)
    // string str = "abbcc";        //          /
    // string str = "abccbd";       //         / 

    bool exist[26];
    fill(exist, exist +26, false);  //fill all array to false
    int res = -1; 
    
    for(int i = str.size()-1; i >= 0; i--){
        if(exist[str[i] - 'a'] == true){
            res = i;
        }
        else{
            exist[str[i] - 'a'] = true;
        }
    }
    
    if(res == -1){
        cout << " No repeated characters exist in given string!"<< endl;
    }
    else{
        cout << str[res] << endl;
    }
    
    return 0;
}