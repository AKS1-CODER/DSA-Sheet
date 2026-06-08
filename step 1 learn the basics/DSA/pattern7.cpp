/*
           *
         * * *
       * * * * *
     * * * * * * *

*/
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
          cout<<" ";

        }
        //star
        for(int k=1; k<=i*2+1; k++){
          cout<<"*";

        }
        //space
        for(int l=1; l<=n-i; l++){
          cout<<" ";
        }
        cout<<endl;

    }


}
int main(){
  print(6);
}