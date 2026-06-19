#include<bits/stdc++.h>
using namespace std;

string isprime(int n){ //for checking against only one number
    if (n < 2) {
        return "not prime";
    }
    for (int i=2;i*i<=n;i++){
        if(n%i==0){
            return"not prime";
        }

    }
    return"prime";
    
}
string noisprime(int n){ //for checking against till Nth number
    if (n < 2) {
        return "not prime";
    }
    cout<<"prime numbers up to"<<n<<"are:"<<endl;
    for ()
    
}

int main(){
    int n;
    cout<<"enter the numbero check prime or not:"<<endl;
    cin>>n;
    cout<<noisprime(n)<<endl;
//

    
    return 0;

}