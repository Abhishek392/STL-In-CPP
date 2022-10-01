#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    for(int a:v)
        cout<<a<<" ";
    cout<<endl;
    
    for(pair<int, int> p : vp)
        cout<<p.first<<" "<<p.second<<endl;

    return 0;
}