/*
   *
   **
   ***
   ****
   ***** */
#include<bits/stdc++.h>
using namespace std;
void print(){
    int n;
    cout<<"enter  a no. for making given no. of lines of pattern of stars "<< endl;
    cin>>n;
    for (int i=1; i<=n; i++ ){
        for (int j=1;  j<=i; j++) {
            cout<<'*';
        }
        cout<< endl;
    }
    

}
int main(){
    print();
}