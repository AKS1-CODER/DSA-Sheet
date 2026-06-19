//Given an integer N, return the number of digits in N.
#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int cat=(int)(log10(n)+1);
    return cat;
}
int main(){
    cout<<count(7789)<<endl;

    //int n;
    //cout<<"enter a no. for counting the digits the no. have"<<endl;
    //cin>>n;
    //int count=0;
    //while(n>0){
    //    int digit=n%10;
    //    count++;
    //    cout<<digit<<" ";
    //    n=n/10;
    //}
    //cout<<endl;
    //cout<<"the no. of digits are: "<<count<<endl;
}