#include<iostream>
using namespce std;


int fact(int n){
    if (n==0 || n==1){
        return 1;
    }

    return n*fact(n-1); 
}

int main(){

int n;
cout<<"Enter n: ";
cin>>n;

int result = fact(n);

cout<<"The fact is: "<<result<<endl;

    return 0;
}