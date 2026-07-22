#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0){
        return 0;
    }
    return n+f(n-1);
}
int main(){
    int n;
    cout<<"enter a no. for geeting sum till that no.: ";
    cin>>n;
    cout<<f(n);
}