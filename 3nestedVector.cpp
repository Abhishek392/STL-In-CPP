#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair inside vector
    /*vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        v1.push_back({x, y});
    }
    cout<<endl;
    cout<<"Elements of vecotr v are:-"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
    cout<<"Elements of vector v1 are:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }*/
    

    // Array of vector: In this, only columns are dynamic.
    /* if input is  1 2
                    3 4 5
                    6 7 8 9 10
                    0
       number of rows are fixed in this and we can vary number of column
    */
    /*vector<int> v[4];
    int i, j;
    for(i=0;i<4;i++){
        int n, x;
        cin>>n;
        for(j=0;j<n;j++){
            cin>>x;
            v[i].push_back(x);
        }
    }
    cout<<endl;
    cout<<"Elements of vector v are:-"<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/


    // Vector inside vector: In this, rows and columns both are dynamic.
    /* if input is  1 2
                    3 4 5
                    6 7 8 9 10
                    0
       number of rows are fixed in this and we can vary number of column
    */
    vector<vector<int>> v;
    vector<int> v0;
    int rows, columns, x, i, j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=0;i<rows;i++){
        cout<<"Enter the number of elements in "<<i+1<<"th row: ";
        cin>>columns;
        for(j=0;j<columns;j++){
            cin>>x;
            v0.push_back(x);
        }
        v.push_back(v0);
        v0.clear();
    }
    for(i=0;i<rows;i++){
        for(j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}