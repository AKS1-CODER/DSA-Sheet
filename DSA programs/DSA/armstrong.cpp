#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. for checking if it is a armstrong or not: ";
    cin>>n;
    int sum=0;
    int count=0;
    int original_n=n;
    int p=n;
    while(n!=0){
        count++;
        n=n/10;
    }
    while(p!=0){

        int lastdigit=p%10;
        sum=sum+pow(lastdigit,count);
        p=p/10;
    }
    if (sum==original_n){
        cout<<"yes it is armstrong no."<<endl;
    }
    else{
        cout<<"no it is not an armstrong no."<<endl;
    }
}