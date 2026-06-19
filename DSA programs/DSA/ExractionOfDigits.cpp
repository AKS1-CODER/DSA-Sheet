//extraction of digits in reverse order
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. for extracting their digits"<<endl;
    cin>>n;
    while(n>0){
        int digit=n%10;
        cout<<digit<<" ";
        n=n/10;
    }
}