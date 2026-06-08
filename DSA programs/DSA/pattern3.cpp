/*
1
12
123
1234
12345

*/
#include<bits/stdc++.h>
using namespace std;
void print(){
    int n;
    cout<<"enter a no. for no. of lines of pattern"<< endl;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
} 
int main(){
    print();
}