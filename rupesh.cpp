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