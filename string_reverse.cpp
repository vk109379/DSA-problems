#include <bits/stdc++.h>

using namespace std;

//program to reverse the string
int main(){

    string str = "isString";
    int j = str.length() -1;

    for(int i = 0 ; i < j; i++){
        swap(str[i], str[j]);
        j--;
    }

    cout << str << endl;

    return 0;
}