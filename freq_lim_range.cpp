//to count the frequency of all elements from 1 to N in the array.
#include<bits/stdc++.h>
using namespace std; 

class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P){
        
        vector<int> temp(N+2, 0);
        
        for(int i = 0; i < N; i++){
            if(arr[i] <= N){
                temp[arr[i]-1]++;
            }
        }
        
        arr = temp;
    }
};

int main() 
{	    
	    vector<int> arr{2, 3, 2, 3, 5};
	    int N = arr.size();
	    int P = 5;
	    
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
		
	return 0; 
}