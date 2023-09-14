#include<bits/stdc++.h>
using namespace std;
/* This function returns the element which is repeating
    more than one time in the given array 

    aux. space : O(N-2)
    time cmplxty : O(N)
*/

class Solution
{
    public:
    int repeating(int arr[], int n)
    {
        bool temp[n-2] = {0};
        
        for(int i = 0; i < n; i++){
            if(temp[arr[i]] == 1){
                return arr[i];
            }
            else{
                temp[arr[i]] = 1;
            }
        }
      
    }
};

int main() {
	int arr[] = {1,2,5,0,3,4,5};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;
	int A = ob. repeating(arr,n);
	
	cout<<"Repeating Element in array is : "<< A <<endl;
	
	return 0;
}

/*we have an array where each element appears only once except for a single 
 element that has multiple occurrences. Additionally, the array always contains
 the number 0, and if the maximum element in the array is x, then all elements 
 from 0 to x are guaranteed to be present in the array.*/