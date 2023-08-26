#include<bits/stdc++.h>
using namespace std;
/* The function returns the index of any
   peak element present in the array */

class Solution
{
    public:
    bool ispair(int arr[], int n, int sum)
    {
        int l = 0, h = n-1, temp;
        while(h > l){
            temp = arr[l] + arr[h];
            
            if(temp == sum){
                return true;
            }
            
            else if(temp > sum){
                h--;
            }
            
            else{
                l++;
            }
        }
        return false;
    }
};

int main() {
	int arr[] = {2, 5, 8, 12, 30};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int sum = 17;
    
    Solution ob;
	bool A = ob.ispair(arr, n, sum);
	
	if(!A){
        cout << "Not Found!";
    }
    else
        cout <<"Found !"<< endl;
	
	return 0;
}