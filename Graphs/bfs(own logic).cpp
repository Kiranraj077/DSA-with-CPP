
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int V,vector<vector<int>> &adj){
    vector<int> vis(V,0);
    queue<int> q;
    vis[0]=1;
    q.push(0);
    vector<int> ans;
    while(!(q.empty())){
         int node=q.front();
         q.pop();
         ans.push_back(node);
         for(int i=0;i<adj[node].size();i++){
              int it=adj[node][i];
              if(!(vis[it])){
                  vis[it]=1;
                  q.push(it);
              }
         }
        
    }
    
    return ans;
    
}
int main()
{
     cout<<"Hello World";
    vector<vector<int>> adj(5);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(0);
    adj[3].push_back(1);
    adj[4].push_back(1);
    vector<int> res=bfs(5,adj);
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    return 0;
}
