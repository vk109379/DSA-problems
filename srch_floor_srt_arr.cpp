
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Function to find floor of x
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        long long l = 0, h = n-1, mid;
        for(int i = 0; i < n/2; i++){
            mid = (l+h)/2;
            if(x == v[mid]){
                return mid;
            }
            else if(v[mid] < x){
                l = mid+1;
            }
            else if(v[mid] > x){
                h = mid-1;
            }
        }
        if(mid == 0){
            return -1;
        }
        else{
            return n-1;
        }
    }
};


int main() {
	
	long long n;
    cout << "No. of elements in array : " << endl;
	cin >> n;

	long long x;
    
	
	vector<long long> v;

	cout << "Input elements in array (sorted order) : ";
	for(long long i = 0;i<n;i++){
	    long long temp;
	    cin >> temp;
	    v.push_back(temp);
	}

    cout << "Element whose floor is to find : " << endl;
	cin >> x;

	Solution obj;

    if(obj.findFloor(v, n, x) == -1){
        cout << "Not found !" << endl;
    }
    else{
        cout << "Found at index : " << obj.findFloor(v, n, x) << endl;
    }
	   	
	return 0;
}