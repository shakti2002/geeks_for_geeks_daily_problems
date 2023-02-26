class Solution {
  public:
  vector<int>vis;
  
  void dfs(int source, vector<vector<int>>&adj, int &vertex, int &edge){
      vis[source]=1;
      vertex++;
      
      for(auto child: adj[source]){
          edge++;
          if(!vis[child]){
              dfs(child, adj, vertex, edge);
          }
          
      }
  }
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        // code here
        vis=vector<int>(V+1, 0);
        int ans=0;
        
        for(int i=1; i<=V; i++){
            if(!vis[i]){
            int vertex=0;
            int edge=0;
            dfs(i, adj, vertex, edge);
            edge=edge/2;
             if(edge==(vertex*(vertex-1))/2){
                 ans++;
             }
            }
            
        }
        return ans;
    }
};
