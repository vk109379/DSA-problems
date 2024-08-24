//This program prints fibonacci series of next 's' numbers by taking first two numbers

#include<iostream>
using namespace std;

int main()
{
    int a,b,s;
    cin >> a >> b >> s;

    for(int i = 0; i < s; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}