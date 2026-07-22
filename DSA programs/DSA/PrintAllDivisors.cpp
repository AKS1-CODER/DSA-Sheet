#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. for getting its all divisors : ";
    cin>>n;
   //for(int i=1; i<=n; i++){
        //if(n%i==0){
        //    cout<<i<<",";
        //}
    //}
    vector<int> ls;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ls.push_back(i);
            //cout<<i<<",";
        }
        if((n/i)!=i){
            //cout<<(n/i)<<",";
            ls.push_back(n/i);
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<< it << ",";
     
}