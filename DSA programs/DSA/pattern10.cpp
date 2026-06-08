/*
*
**
***
****
*****
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i=0; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void print2(int n){
    for (int i=0; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print1(n);
    print2(n-1);
}