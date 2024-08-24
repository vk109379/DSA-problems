//calculating subarray with maximum sum using sliding window 

#include <bits/stdc++.h>
using namespace std;

int maxd(int A[], int N, int k)
{
    int cmax = 0;
    int l = 0, h = k-1;
    
    if(k > N){
        return -1;
    }
    
    for(int i=l; i < k; i++){
        cmax += A[i];
    }
    
    int temp = cmax;
    
    for(int i=1; i <= N - k; i++){
        
        temp = cmax - A[l] + A[h+1];
        
        if(cmax < temp){
            cmax = temp;
            l++;
            h++;
        }
    }
    return cmax;
}

int main() {
   int A[] = {1, 4, 2, 10, 23, 3, 1, 0, 20} ;
   int N = sizeof(A)/sizeof(A[0]);
   int k = 4;
   
   int sum = maxd(A, N, k);
   
   if(sum == -1){
       cout <<"Invalid Input ! " << endl;
   }
   else{
        cout <<"Max. sum is : " << sum << endl;
   }
    
    return 0;
}