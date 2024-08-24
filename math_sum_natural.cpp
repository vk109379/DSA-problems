//to print sum of first n natural numbers

#include <bits/stdc++.h>
using namespace std;

int sum(int num){
    int temp;
    if(num <2){
        return 1;
    }
    else {
        return num + sum(num-1);
    }
}

int main() {
    int n;
    cin >> n;
 cout <<  sum(n);

    return 0;
}