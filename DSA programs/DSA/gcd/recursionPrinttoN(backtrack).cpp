#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
    if(i<1){
        return;
    }
    f(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    int i;
    cout<<"enter a no. for getting counting till that no.: ";
    cin>>n;
    f(n,n);
}