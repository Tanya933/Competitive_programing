#include<bits/stdc++.h>
using namespace std ;
const int N = 1e4;
vector<int>graph[N];

void dfs(int par,int curr,int k){
    if (curr == k) {
        cout << "present"
             << "\n";
        return;
    }

    for(int child : graph[curr]){
            // cout<<child<<" ";
            if(child == par) continue ;
            dfs(curr,child,k);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int k ;
    cout<<"enter node to be searched: ";
    cin>>k;
    dfs(-1,1,k);
    return 0;
}