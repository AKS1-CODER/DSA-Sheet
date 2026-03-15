/*

*         *
**       **
***     ***
****   ****
***********
****   ****
***     ***
**       **
*         *

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int iniS=9;
    for(int i=1; i<=4; i++){
        for(int j= 1; j<=i; j++){
            cout<<"*";
        }
        for (int k=1; k<=iniS; k++){
            cout<<" ";
        }
        for(int j= 1; j<=i; j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;

    }
    for(int i=1; i<=11; i++){
        cout<<"*";
    }
    cout<<endl;
    int inis2=3;
    for (int i=0; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"*";
        }
        for (int k=1; k<=inis2; k++){
            cout<<" ";
        }
        for (int j=1; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
        inis2+=2;
        

    }

}