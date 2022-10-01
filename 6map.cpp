#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m; // use red-black tree for implementation.
    m[1] = "abc";
    m[6] = "cde";
    m[3] = "efg";
    map<int, string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;


    for(pair<int, string> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;


    it = m.find(3);
    if(it==m.end())
        cout<<"No Value"<<endl;
    else    
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;


    m.erase(6);
    m.erase(it);
    for(pair<int, string> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;


    return 0;
}