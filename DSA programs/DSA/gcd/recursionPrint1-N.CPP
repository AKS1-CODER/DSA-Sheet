#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int n;
    int i=1;
    cout<<"enter a no. for getting 1 to n numbers in series: ";
    cin>>n;
    print(i,n);
}