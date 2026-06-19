#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter a no. for checking if it is a pallindrome: ";
    cin>>n;
    cout<<endl;
    long long revn=0;
    int original_n=n;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        revn=(revn*10)+lastdigit;

    }
    cout<<endl;
    if (revn==original_n){
        cout<<"yes it is a pallinedrome"<<endl;
    }
    else{
        cout<<"it is not a pallinedrome"<<endl;
    }
}