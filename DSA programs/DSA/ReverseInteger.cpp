//Reverse a number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a no. for reversing it: ";
    cin>>n;
    cout<<endl;
    long long revn=0;
    while(n!=0){
        int lastdigit=n%10;
        if (revn>INT_MAX/10||(revn==INT_MAX/10 && lastdigit>7)){
            return 0;
        }
        if (revn<INT_MIN/10||(revn==INT_MIN/10 && lastdigit<-8)){
            return 0;
        }
        n=n/10;
        revn=(revn*10)+lastdigit;
        
    }
    cout<<revn;
}