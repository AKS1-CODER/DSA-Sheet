#include<bits/stdc++.h>
using namespace std;
int cont = 0;
void print(){
    if(cont==3) return;
    
    cout<<cont<<endl;
    cont++;
    print();
}
int main(){
    print();
    return 0;
}
