#include <bits/stdc++.h>
using namespace std;

int goodCells(vector<vector<int>> &v){
    // Write your code here
    int n =v.size();
    int m =v[0].size();
    int count=0,curxor,prexor=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            curxor=0;
            for(int k =0;k<n;k++){
                curxor^=v[k][j];
            }
            for(int k=0;k<m;k++){
                curxor^=v[i][k];
            }
            if(prexor ==curxor){
                count++;
            }
            prexor=curxor;
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        cout<<goodCells(v)<<endl;
    }
    return 0;
}
