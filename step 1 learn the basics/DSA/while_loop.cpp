#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    while(i<=10){
        cout<<i<< endl;
        i++;

    }
    int n = 5;
    int factorial = 1;
    while(n>0) {
        factorial*=n;
        n--;
    }
    cout<<"factorial of 5 is : " << factorial << endl;
    return 0;
}