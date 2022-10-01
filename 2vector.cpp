#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){ // try to pass refrences always because otherwise it will
// copy elements one by one and that will take o(n) complexity.
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
    vector<int> v(10); // here v is vecotr with size 10 whose elements are 0.
    vector<int> v1(10, 3); // here v1 is vector with size 10 whose elements are 3.
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v.pop_back(); // doesn't return the value
    printVector(v);
    printVector(v1);
    printVector(v2);
    return 0;
}