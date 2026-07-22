#include<bits/stdc++.h>
using namespace std;
//int cnt =0;
//void print(int n){
//    if(cnt==n){
//        return;
//    }
//    cout<<"Anmol Kumar Singh"<<endl;
//    cnt++;
//    print(n);
//}
//int main(){
//    cout<<"enter a no. of times you want to print name"<<endl;
//    int n;
//    cin>>n;
//    print(n);
//}
void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Anmol Kumar Singh"<<endl;
    f(i+1,n);
}
int main(){
    int n;
    int i=1;
    cout<<"enter a no. for printing n times your name: "<<endl;
    cin>>n;
    f(i,n);
}