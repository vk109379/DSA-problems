

#include <bits/stdc++.h>
using namespace std;

int stonks(int a[], int N)
{
    int i,min = 0, prof= 0, max = 0;
    int temp = 0;
            
    for(i=1; i<N; i++){
        if(a[i] > a[i-1]){
            prof += a[i] - a[i-1];
        }
    }
    return prof;
}

int main() {
   int a[] = {100, 180, 260, 310, 40, 535, 695} ;
   int N = sizeof(a)/sizeof(a[0]);
   
   cout <<  stonks(a, N) <<endl;
    
    return 0;
}