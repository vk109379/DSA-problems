#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int low = 0, i;
        
        for( i = 0; i < n; i++){
            if(arr[i] <=0){
                swap(arr[low], arr[i]);
                low++;
            }
        }
        int newSize = n - low;
        if(newSize == 0){
            return 1;
        }
        
        for( i = low; i < n; i++){
            if(abs(arr[i]) > newSize)
                continue;
                
            else if(abs(arr[i]) <= newSize  && arr[(abs(arr[i])) + low -1] > 0){
                arr[(abs(arr[i])) + low -1] *= -1;
            }
        }
        for( i = low; i < n; i++){
            if(arr[i] > 0){
                return i - low +1;
            }
        }
        return newSize +1; 
    } 
};


int main() { 
    int arr[] = {-44, 30, -28, 43, -1, 37, -48, -24, -12, 8, -1, 8, 1, -36, 12, -11, 6, 4, -15, -35, -16, 7, 10, -15, -43, -4, 14, 33, 5};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;
    //calling missingNumber()
    cout<<"Smallest positive missing number is = " << ob.missingNumber(arr, n)<<endl;
    return 0; 
}