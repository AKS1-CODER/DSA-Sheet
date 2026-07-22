#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. for checking if it's prime: ";
    cin>>n;
    cout<<endl;
    int count=0;
    //for(int i=1; i<=n; i++){
      //  if(n%i==0){
        //    count++;
        //}
        
    //}
    //if(count==2){
      //      cout<<"it is prme: "<<endl;
        //}
        //else{
        //    cout<<"it is not prime: "<<endl;
        //}
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"it is a prime."<<endl;
    }
    else{
        cout<<"it is not prime."<<endl;
    }
}