#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string values:s){
        cout<<values<<" ";
    }
    cout<<endl<<endl;
    set<string>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    s.insert("jkl");
    print(s);

    auto it = s.find("jkl");
    if(it==s.end())
        cout<<"No value"<<endl;
    else    
        cout<<*it<<endl;
    cout<<endl;

    s.erase(it);
    s.erase("abc");
    print(s);

    return 0;
}