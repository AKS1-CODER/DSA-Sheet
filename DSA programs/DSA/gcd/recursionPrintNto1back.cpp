#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
    if(i>n){
        return;
    }
    i++;
    f(n-(n-i),n);
    cout<<i<<endl;
}
int main(){
    int n;
    int i=0;
    cout<<"enter  a no. for getting reveres counting from that no.: ";
    cin>>n;
    n=n-1;
    f(i,n);
}