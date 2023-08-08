/*Problem :
Given two arrays L[] and R[] of size N where L[i] and R[i]  denotes a range of numbers,
the task is to find the maximum occurred integer in all the ranges.
If more than one such integer exists, print the smallest one.

Input: L[ ] = {1, 4, 3, 1}, R[ ] = {15, 8, 5, 4}
Output: 4
In all these ranges, 4 appears the most times.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxOccured(int L[], int R[], int n, int maxx){
        
        vector<int> v(maxx+2, 0);
        int max = 0;
        int i;
        
        for(i = 0; i < n; i++){
            v[L[i]]++;
            v[R[i] +1]--;
        }
        
        int size = v.size();
        int temp = v[0];
        
        for(i = 1; i < size; i++){
            temp += v[i];
            v[i] = temp ;
        }
        
        for(i = 1; i < size; i++){
            if(v[max] < v[i]){
                max = i;
            }
        }
        return max;
    }
};

int main() {
	
    
    int L[] = {1, 5, 9, 13, 21};
    int R[] = {15, 8, 12, 20, 24};
    int n = sizeof(L)/sizeof(L[0]);
    int maxx = 0;

    for(int i = 0; i<n; i++){
        if(R[i] > maxx){
            maxx = R[i];
        }
    }
    Solution ob;
    
    cout << ob.maxOccured(L, R, n, maxx) << endl;
	
	return 0;
}