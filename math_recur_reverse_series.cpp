// program to print numbers in reverse order using recursive function
#include <bits/stdc++.h>
using namespace std;


 void series(int num)
    {
       if(num <= 0)
        return;

    if (num > 0){
        cout << num <<" ";
        series(num-1);
        
    }

}
int main() {
    series(7);

    return 0;
}