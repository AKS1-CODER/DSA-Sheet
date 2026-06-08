/*
1      1
12    21
123  321
12344321


*/
#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<j;
        }

        for(int l=1; l<=2*(n-i); l++){
            cout<<" ";
        }
        for(int k=i; k>=1; k-- ){
            cout<<k;
        }
        cout<<endl;
    }
}
int main(){
    print1(4);
}