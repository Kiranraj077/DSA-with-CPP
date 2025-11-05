#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; 
        vis[0] = 1; 
        queue<int> q;

        // push the initial starting node 
        q.push(0); 
        vector<int> bfs; 

        // iterate till the queue is empty 
        while(!q.empty()) {
            // get the topmost element in the queue 
            int node = q.front(); 
            q.pop(); 
            bfs.push_back(node); 

            // traverse all its neighbours 
            for (int i = 0; i < adj[node].size(); i++) {
                int it = adj[node][i];
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs; 
    }
};

// Helper function to add an undirected edge
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// Helper function to print BFS result
void printAns(vector<int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    Solution obj;
    vector<int> ans = obj.bfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}

