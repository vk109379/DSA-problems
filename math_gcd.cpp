#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int result = min(a,b);
    while(result > 0)
    {
        if(a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}
int main()
{
    int g=24, l=16;
    cout << "GCD of " << g << " and " << l << " is : " << gcd(24, 16) << endl;
    
    return 0;
}