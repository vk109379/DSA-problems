// Maximum subarray sum 
// returns the maximum sum of subarray

#include <bits/stdc++.h>
using namespace std;

void maxd(int A[], int N)
{
    int cmax = A[0];
    int res = cmax;
    int l, h;
            
    for(int i=1; i < N; i++){
        cmax = max(cmax + A[i], A[i]);
        if(cmax == A[i]){
            l = i;
        }
        if(res > cmax){
            h = i;
        }
        res = max(res, cmax);
    }
    
    cout <<"Max. sum is : " << res << endl;
    cout <<"Subarray with Max. sum is : ";
    
    for(int i = l; i < h ; i++){
        cout <<" "<< A[i];
    }
}

int main() {
   int A[] = {-2, -3, 4, -1, -2, 1, 5, -3} ;
   int N = sizeof(A)/sizeof(A[0]);
   
   maxd(A, N);

   cout << endl;
    
    return 0;
}