#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}
int main(){
    int n;
    cout<<"enter a no. till you want to get the sum: ";
    cin>>n;
    f(n,0);
}