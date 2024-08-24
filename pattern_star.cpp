#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=1;i<=4;i++){
        for(int j=i; j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    } 
    return 0;
}