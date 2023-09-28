#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        vector<int> rpt;
        bool temp[N] = {false};
        
        for(int i = 0; i < N+2; i++){
            if(temp[arr[i]-1] == true){
                rpt.push_back(arr[i]);
            }
            else{
                temp[arr[i]-1] = true;
            }
        }
        
        return rpt;
    }
};
// 2 ≤ N ≤ 100000
// 1 ≤ array[i] ≤ N
// Only two elements are repeating
// the size of the array is N + 2 and elements are in the range[1, N]
int main()
{
        int A[] = {1,2,1,3,4,3};
        int  n = sizeof(A)/sizeof(A[0]) -2 ;
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(A, n);
        cout<<"Repeating elemetns are "<< res[0]<<" "<<res[1]<<endl;
    return 0;
}