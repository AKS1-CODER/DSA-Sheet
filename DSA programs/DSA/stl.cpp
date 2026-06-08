#include<bits/stdc++.h>
using namespace std;

//for sorting by second element, we need a custom comparator function
bool comparator(pair<int,int>c1,pair<int,int>c2){
    if(c1.second<c2.second) return true;
    if(c1.second>c2.second) return false;

    if(c1.first<c2.first) return true;
    else return false;
}
int main() {
    vector<int>vec;
//
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back();//removed 6
//
    cout << vec.size() << endl;//3
    cout << vec.capacity() << endl;//4
//
    for(int val : vec){
        cout << val << " ";

    }
    cout<<endl;
//
    cout << "val at idx 2 is " << vec[2]<< " or " << vec.at(2) << endl;
    cout << "val at front is " << vec.front() << " val at back is " << vec.back() << endl;
//
    vector<int> jec={1,2,3,4,5,6};
    for(int jal : jec){
        cout << jal<< " ";
    }
    cout << endl;
//
    vector<int> h(3,10);
    for(int t : h){
        cout<< t << " ";
    }
    cout<<endl;
//
    vector<int> vec2(vec);
    for(int s : vec2){
        cout << s << " ";
    }
    cout<<endl;
//
    vec2.erase(vec2.begin());
    vec2.erase(vec2.begin()+2);
    vec2.erase(vec2.begin()+1, vec2.begin()+3);
    for(int z: vec2){
        cout<<z<<" ";
    }
    cout<<endl;
//
    vec2.insert(vec2.begin()+1,100);
    for(int i: vec2){
        cout<<i<<" ";
    }
    cout<<endl;
//
    vec2.clear();
//
    cout << vec2.size() << endl;
    cout << vec2.capacity() << endl;
//
    cout << "is empty:" << vec2.empty() << endl;
//
    cout<<" vec.begin: "<< *(jec.begin()) << endl;
//
    cout<<" vec.end: "<< *(jec.end()) << endl;
//
    vector<int>::iterator it;
    for(it=jec.begin(); it!=jec.end(); it++){
        cout<< *(it)<<" ";
    }
    cout << endl;
//
    vector<int>::reverse_iterator itr;
    for(auto itr = jec.rbegin(); itr!=jec.rend(); itr++){
        cout<< *(itr) << " ";
    }
    cout<< endl;
//
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    l.push_front(-1);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
//
    list<int>s={1,2,3,4,5,6,7,8,9};
    for ( int sal: s){
        cout<<sal<<" ";

    }
    cout<<endl;
//
    deque<int>d={1,2,3,4,5,6,7,8,9};
    for(int cal: d){
        cout<<cal<<" ";
    }
    cout<<endl;
//
    cout<<d[3]<<endl;
//
    pair<int,int>p={1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    pair<string,int>t={"AKS",100};
    cout<<t.first<<endl;
    cout<<t.second<<endl;
    pair<int,pair<string,int>>w={21,{"AKS",100}};
    cout<<w.first<<endl;
    cout<<w.second.first<<endl;
    cout<<w.second.second<<endl;
//
    vector<pair<int,int>>lec ={{1,2},{3,4},{6,5},{7,8},{9,0}};
    lec.push_back({14,88});//insert
    lec.emplace_back(55,77);//in-place objects create
    for(pair<int,int>q: lec){
        cout<<q.first<<","<<q.second<<" : ";
    }
    cout<<endl;
//
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    cout<<"top valure:"<<st.top()<<endl;
    st.pop();
    cout<<"top value:"<<st.top()<<endl;
    while(!st.empty()){
        cout<<"top value:"<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    stack<int>sc;
    sc.push(1);
    sc.push(2);
    sc.push(3);
    sc.push(4);
    stack<int>ct;
    cout<<"sc size"<<sc.size()<<endl;
    cout<<"ct size"<< ct.size()<<endl;
    ct.swap(sc);
    cout<<"sc size after swapping"<<sc.size()<<endl;
    cout<<"ct size after swapping"<< ct.size()<<endl;
//
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
//
    priority_queue<int>pq;
    pq.push(5);
    pq.push(3);
    pq.push(1);
    pq.push(10);
    pq.push(50);
    pq.push(2);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
//
    priority_queue<int, vector<int>, greater<int>>cq;
    cq.push(5);
    cq.push(3);
    cq.push(1);
    cq.push(10);
    cq.push(50);
    cq.push(2);
    while(!cq.empty()){
        cout<<cq.top()<<" ";
        cq.pop();
    }
    cout<<endl;
//
    map<string,int>m;
    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=50;
    m["tablet"]=150;
    m["watch"]=50;
    m.insert({"camera", 25});
    m.emplace("yoyo",89);
    m.erase("tv");
    for(auto z:m){
        cout<<z.first<<" "<<z.second<<endl;
    }
    cout<<"count = "<<m.count("laptop")<<endl;
    if(m.find("camera")!=m.end()){
        cout<<"found\n";
    } else{
        cout<<"not found\n";
    }
//
    multimap<string,int>n;
    n.emplace("tv",100);
    n.emplace("tv",100);
    n.emplace("tv",100);
    n.emplace("tv",100);
    n.emplace("y",100);
    n.emplace("y",100);
    n.emplace("y",100);
    n.emplace("y",100);
    for(auto x:n){
        cout<<x.first<<" "<<x.second<<endl;
    }
    //n.erase("tv");
    cout<< "after erasing tv"<<endl;
    for(auto x:n){
        cout<<x.first<<" "<<x.second<<endl;
    }
    n.erase(n.find("tv"));
    n.erase(n.find("y"));
    for(auto g:n){
        cout<<g.first<<" "<<g.second<<endl;
    }
//
    unordered_map<string,int>um;
    um.emplace("ac",100);
    um.emplace("ac",100);
    um.emplace("ac",100);
    um.emplace("ac",100);
    for(auto h:um){
        cout<<h.first<<" "<<h.second<<endl;
    }
//
    unordered_map<string,int>us;
    us.emplace("a",100);
    us.emplace("b",100);
    us.emplace("c",100);
    us.emplace("d",100);
    for(auto he:us){
        cout<<he.first<<" "<<he.second<<endl;
    }
//
    set<int>k;
    k.insert(1);
    k.insert(2);
    k.insert(3);
    k.insert(4);
    
    k.insert(6);

    k.insert(1);
    k.insert(2);
    k.insert(3);
    k.insert(4);
   
    k.insert(6);
    cout<<"lower bound "<<*(k.lower_bound(4))<<endl;//4
    cout<<"lower bound "<<*(k.lower_bound(5))<<endl;//6
    cout<<"lower bound "<<*(k.lower_bound(7))<<endl;//end or 0

    cout<<"upper bound "<<*(k.upper_bound(4))<<endl;//6




    cout<<"size of set k : "<<k.size()<<endl;

    for(auto wal:k){
        cout<<wal<<" ";
    }
    cout<<endl;
//
    multiset<int>v;
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);

    v.insert(6);

    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);

    v.insert(6);
    for(auto al:v){
        cout<<al<<" ";
    }
    cout<<endl;
//
    unordered_set<int>vc;
    vc.insert(1);
    vc.insert(2);
    vc.insert(3);
    vc.insert(4);

    vc.insert(6);

    vc.insert(1);
    vc.insert(2);
    vc.insert(3);
    vc.insert(4);

    vc.insert(6);
    for(auto acl:vc){
        cout<<acl<<" ";
    }
    cout<<endl;
//
    int arr[5]={3,5,1,8,2};
    //sort(arr,arr+5);//sort in acsending order
    sort(arr,arr+5, greater<int>());//sort in descending order
    for(int arl: arr){
        cout<<arl<<" ";
    }
    
    cout<<endl;
//
    vector<int>vec3={3,5,1,8,2};
    sort(vec3.begin(),vec3.end(), greater<int>());//if want to sort in acsending order, just remove the greater comparator
    for(int aql: vec3){
        cout<<aql<<" ";
    }
    cout<<endl;
//
    vector<pair<int,int>>vec4={{3,1},{2,1},{7,1},{5,2}};
    sort(vec4.begin(),vec4.end());//sort by first element(ascending order)
    for(auto o: vec4){
        cout<<o.first<<","<<o.second<<endl;
    }
    cout<<endl;



    sort(vec4.begin(),vec4.end(), comparator );
    for (auto i:vec4){
        cout<<i.first<<","<<i.second<<endl;
    }
//
    vector<int>vec5={1,2,3,4,5};
    reverse(vec5.begin(),vec5.end());
    for(auto i8:vec5){
        cout<<i8<<" ";
    }
    cout<<endl;
    //
    vector<int>vec6={1,2,3,4,5};
    reverse(vec6.begin()+1,vec6.begin()+3);
    for(auto i9:vec6){
        cout<<i9<<" ";
    }
    cout<<endl;
//
    string str1="abc";
    //next_permutation(str1.begin(),str1.end());//next permutation
    prev_permutation(str1.begin(),str1.end());
    cout<<str1<<endl;
//
    cout<<max(4,5)<<" "<<min(6,10)<<endl;
//  
    int a = 5, b=10;
    swap(a,b);
    cout<<"a= "<<a<<" b= "<<b<<endl;
//
    vector<int>vec7={1,2,3,4,5};
    cout<<*(max_element(vec7.begin(),vec7.end()))<<endl;
    cout<<*(min_element(vec7.begin(),vec7.end()))<<endl;
//
    cout<<binary_search(vec7.begin(),vec7.end(),4)<<endl;
    cout<<binary_search(vec7.begin(),vec7.end(),10)<<endl;
//
    int idx=15;
    long int inc=15;
    long long int inc2=15;
    cout<<__builtin_popcount(idx)<<endl;//number of set bits in binary representation of idx
    cout<<__builtin_popcountl(inc)<<endl;//number of set bits in binary representation of inc
    cout<<__builtin_popcountll(inc2)<<endl;
    return 0;
}