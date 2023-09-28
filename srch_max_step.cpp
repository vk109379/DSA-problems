#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
       int temp = 0, step = 0;
       
       for(int i = 0; i < N; i++)
       {
           if(i+1 < N && A[i+1] > A[i])
           {
               step++;
           }
           else
           {
               if(temp < step)
               {
                   temp = step;
               }
               
               step = 0;
           }
       }
       return temp;
    }
};

int main() {
	
	int A[] = {6,11,24,37,42,3,5};
    int  n = sizeof(A)/sizeof(A[0]) ;
    
    Solution ob;
    cout << ob.maxStep(A, n) << endl;
    
	return 0;
}