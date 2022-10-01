#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> m; // use hash table for implementation
    m[1] = "abc";
    m[9] = "def";
    m[4] = "ghi";
    m[3] = "jkl";
    for(pair<int, string> p : m)
        cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;

    return 0;
}