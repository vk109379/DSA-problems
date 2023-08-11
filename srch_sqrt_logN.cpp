//if a number is given, this program gives the floor value of its square root in logarithmic complexity.
#include <bits/stdc++.h>
using namespace std;


int sqrtt(int num){
    
    int l = 1, h = num, mid, temp;
    
    while(l <= h){
        mid = (l+h)/2;
        temp = mid * mid;
        
        
        if(temp > num){
            h = mid -1;
        }
        else if(temp <= num && (mid+1)*(mid+1) > num){
            return mid;
        }
        else{
            l = mid + 1;
        }   
    }
    
    return -1;
}


int main() {

   int num;
   cin >> num;
 
        cout << "square root (or floor value) is : " << sqrtt(num) << endl;
	
	return 0;
}