#include<bits/stdc++.h>
using namespace std;
void f(int l, int r, int arr[]){

    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr);

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    f(0,9,arr);
    for (int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
