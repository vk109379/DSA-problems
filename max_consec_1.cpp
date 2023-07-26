// To Find Maximum Consecutive 1s in an binaryy array

#include <bits/stdc++.h>
using namespace std;

void maxd(int A[], int N)
{
    int i,zero = 0;
    int temp = 0;
            
    for(i=0; i<N; i++){
        if(A[i] == 1){
            temp++;
        }
        else if(A[i] == 0){
            if(temp > zero){
                zero = temp;
            }
            temp = 0;
            
        }
        if(i== N-1 && temp > zero){
            zero = temp;
        }
    }
    cout << zero;
}

int main() {
   int A[] = {0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0} ;
   int N = sizeof(A)/sizeof(A[0]);
   
   maxd(A, N);
    
    return 0;
}