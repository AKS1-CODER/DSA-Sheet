#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0){
        return 1;
    }
    return n*f(n-1);
}
int main(){
    int n;
    cout<<"enter a no. for which you want to find its factorial: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<f(n);
}