#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        int i, j, p;
        int count = 0;
        sort(arr, arr+n);
        
        for(p = n-1; p > 1; p--){
            j = p - 1;
            i = 0;
            while(i < j){
                if(arr[i] + arr[j] > arr[p]){
                    count += j - i;
                    j--;
                    i = 0;
                }
                else{
                    i++;
                }
            }
        }
        return count;
    }
};

int main(){
    int arr[] = {5,2,8,6,1,9,4};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    Solution ob;
        
    ob.findNumberOfTriangles(arr, n);
    cout << ob.findNumberOfTriangles(arr, n) <<endl;
    
    
    return 0;
}