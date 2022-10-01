#include<bits/stdc++.h>
using namespace std;

int main(){
    /*vector<int> v = {1, 2, 3, 4, 5};
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    vector<int>::iterator it = v.begin(); // here "it" is pointing to element at 0th index.
    for(;it!=v.end();it++) // v.end() is location of memory next to location of 5.
        cout<<*it<<" ";
    cout<<endl;*/
    /* it+1 represent the memory location and it++ represent the next iterator. Beacause
       vector is continuous therefore both it++ and it+1 are valid.
    */


    vector<pair<int, int>> p = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it = p.begin();
    for(;it!=p.end();it++)
        cout<<(*it).first<<" "<<it->second<<endl; // (*it).first <-> it->first

    return 0;
}