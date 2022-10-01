#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p, p1, p2[2];
    p = {1, 2};
    p1.first = 3, p1.second = 4;
    p2[0] = p, p2[1] = p1;
    for(int i=0;i<2;i++){
        cout<<p2[i].first<<" "<<p2[i].second<<endl;
    }
}