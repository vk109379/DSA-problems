#include <bits/stdc++.h>

using namespace std;

int main()
{
    // string str = "reggin",tstr;
    int arr[] = {1,2,3,4,6,7,8,9,10};
    int i , temp;
    int n = sizeof(arr);
    // cin>> i;
    for(i= 1 ; i <=n ; i++){
           temp = arr[i-1];
         if(i != temp){
            cout<< "Missing no. is"<<"  "<<i<<endl;
            break;
            
         }
        //  else
        //  cout<< "no missing no."<<endl;
        
    }
    return 0;
}