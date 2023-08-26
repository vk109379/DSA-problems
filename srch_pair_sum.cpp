#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    /* This function determine whether there exists a pair of integers in 
        the sorted array that adds up to a given target value */

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