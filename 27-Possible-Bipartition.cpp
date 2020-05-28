class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        int n = dislikes.size();
        if(n==0)
            return true;
       vector<vector<int>> adj(N+1);
       vector<int> group(N+1,0); //1 or 2
       vector<bool> visited(N+1,false);
       for (auto &dislike : dislikes){
           int u = dislike[0];
           int v = dislike[1];
           adj[u].push_back(v);
           adj[v].push_back(u);   
       }
       queue<int> q;
        
       for (int i = 1; i <= N; ++i){
            if (!visited[i]){
                group[i] =1;
                q.push(i);
                //BFS from vertex i
                while(!q.empty()){
                    int u = q.front();
                    q.pop();
                    if (visited[u]) continue;
                    visited[u] = true;
                    for(auto v : adj[u]){
                        if(group[v]==group[u]) return false;
                        if(group[u]==1) group[v]=2;
                        else group[v]=1;
                        q.push(v);
                    }
                }
                
            }
        
       }
                
        return true;
    }
};