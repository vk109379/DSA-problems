#include <bits/stdc++.h>
using namespace std;
// to print armstrong numbers form 1 to whatever
 int main()
 {
    int num,len,n ,res;
    int temp ;

   for(num=1 ; num<=2000 ; num++){
      len = 0;
         n=num;
         temp = num;
        res=0;
        while(n > 0){
            n = n/10;
            len += 1;
        }
        while(temp > 0){
            n= temp%10;
            res += pow(n, len) ;
            temp /= 10;
        }
        if(res == num){
            cout << res << ", ";
        }
    }
    cout << endl;
    return 0;
 }