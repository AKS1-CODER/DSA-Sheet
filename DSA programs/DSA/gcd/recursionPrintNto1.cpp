#include<bits/stdc++.h>
using namespace std;
//void print(int n, int i){
//    if(n<=i){
//        return;
//    }
//    cout<<n<<endl;
//    print(n-1,i);
//}
//int main(){
//    int n;
//    int i=0;
//    cout<<"enter a no. for getting reverse counting from that digit: ";
//    cin>>n;
//    print(n,i);
//}
void f(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    f(i-1,n);
}
int main(){
    int n;
    int i;
    cout<<"enter a no. for getting reverse counting from that digit: ";
    cin>>n;
    f(n,n);
}