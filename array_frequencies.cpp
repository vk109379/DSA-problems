//this program prints frequencies of each array element in a sorted array.

#include <bits/stdc++.h>
using namespace std;

void maxd(int A[], int N)
{
    int i,min = 0, freq= 0;
    int temp = 0;
            
    for(i=0; i<N; i++){
        if(A[i] != A[i+1]){
            freq++;
            cout <<"Frequency of "<< A[i]<< " is: "<< freq <<endl;
            freq = 0;
        }
        if(A[i] == A[i+1]){
            freq ++;
        }
    }
}

int main() {
   int A[] = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10} ;
   int N = sizeof(A)/sizeof(A[0]);
   
   maxd(A, N);
    
    return 0;
}