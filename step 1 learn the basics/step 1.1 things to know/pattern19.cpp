/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********  
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int iniS=0;
    for (int i =0; i<n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"*";
        }
        for(int k=0; k<iniS; k++){
            cout<<" ";
        }
        for (int j=1; j<=n-i; j++){
            cout<<"*";
        }

        iniS+=2;
        cout<<endl;    

    }
    int iniS2=8;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int k=0; k<iniS2; k++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        iniS2 -=2;
        cout<<endl;


    }
}