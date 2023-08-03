#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    int minAdjDiff(int arr[], int n){    
        int temp = 0 , min = arr[n-1] - arr[0] ;
        if (min < 0){
                min *= -1;
            }
        
        
        for (int i = 0; i < n-1; i++){
            temp = arr[i] - arr[i+1];
            if (temp < 0){
                temp *= -1;
            }
            if(temp <= min){
                min = temp;
            }
        }
        return min;
        
    }
};

int main()
{
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    return 0;
}