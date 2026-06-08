/*
*****
****
***
**
*

*/
#include<bits/stdc++.h>
using namespace std;
void print(){
    int n;
    cout<<"enter a no. for making given no. of lines of pattern";
    cin>>n;
    for (int i=0; i<=n; i++){
        for (int j=n; j-i; j--){
            cout<<'*';
        }
        cout<<endl;
    }
}
int main(){
    print();
}