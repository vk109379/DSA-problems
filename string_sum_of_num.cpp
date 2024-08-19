// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;

class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int sum = 0;
        int num = 0;
        
        for(int i = 0; i < str.length(); i++){
            if(str[i] >= '0' && str[i] <= '9'){
                num = (num * 10) + str[i] - '0';
            }
            else{
                sum += num;
                num = 0;
            }
        }
        sum += num;
        
    	return sum;
    }
};

int main()
{

    string str = "1abc23sei39jx30jxq97";
    
    Solution obj;
    cout << obj.findSum(str);
    cout<<endl;
	return 0;
}