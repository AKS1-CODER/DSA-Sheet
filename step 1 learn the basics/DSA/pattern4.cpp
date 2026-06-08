#include<bits/stdc++.h>
using namespace std;
void print(){
    int n;
    cout<<"enter  a no. for making pattern of given no. of lines ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    print();
}