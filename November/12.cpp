// https://practice.geeksforgeeks.org/problems/possible-paths3834/1

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
   long long ans = 0, mod = 1e9+7;
    int dp[55][55];
    
    int dfs(int u, vector<vector<int>>&graph, int &v, int k)
    {
        if(k < 0)
            return 0;
            
        if(k == 0 and u == v)
            return 1;
        
        if(dp[u][k] != -1)
            return dp[u][k];
            
        int ans = 0;
        for(int n=0; n < graph[u].size(); n++)
        {
            if(graph[u][n] == 0) continue;
            
            ans = (ans + dfs(n, graph, v, k-1)) % mod;
        }
        
        return dp[u][k] = ans;
    }
    
	int MinimumWalk(vector<vector<int>>&graph, int u, int v, int k){
	    // Code here
	    memset(dp, -1, sizeof(dp));
	    return dfs(u, graph, v, k);
	}


};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>graph(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> graph[i][j];
			}
		}
		int u, v, k;
		cin >> u >> v >> k;
		Solution obj;
		int ans = obj.MinimumWalk(graph, u, v, k);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends