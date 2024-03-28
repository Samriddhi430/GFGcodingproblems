//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    void dfs(vector<int> adj[], stack<int>& s, vector<int>&visited, int node){
        visited[node] = 1;
        for(int i=0; i<adj[node].size(); i++){
            int neighbour = adj[node][i];
            if(!visited[neighbour]) dfs(adj, s, visited, neighbour);
        }
        s.push(node);
    }
    
    vector<int> using_dfs(int V, vector<int> adj[]){
        vector<int> ans;
        stack<int> s;
        vector<int> visited(V+1, false);
        for(int i=0; i<V; i++){
            if(!visited[i]) dfs(adj, s, visited, i);
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
    
    vector<int> using_bfs(int V, vector<int> adj[]){
        vector<int> indegree(V+1, 0);
        for(int i=0; i<V; i++){
            for(int j=0; j<adj[i].size(); j++){
                indegree[adj[i][j]]++;
            }
        }
        
        queue<int> q;
        vector<int> ans;
        for(int i=0; i<V; i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            for(int i=0; i<adj[front].size(); i++){
                int neighbour = adj[front][i];
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        return ans;
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	     return using_bfs(V, adj);
	    // code here
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends