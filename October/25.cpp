//https://practice.geeksforgeeks.org/problems/6b216f3d1f1ce9a14258b982d44f5e5199e7759a/1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
class Solution{
    public:
    int minTime(vector<pair<int, int>> &d, int dur[], int n, int m) {
	vector<int> indeg(n, 0), topo, dp(n, 0), adj[n];
	queue<int> q;
	for(int i=0;i<m;i++)indeg[d[i].second]++,adj[d[i].first].push_back(d[i].second);
	for (int i = 0; i < n; i++)if (indeg[i] == 0)q.push(i), dp[i] = dur[i];
	while (!q.empty()) {
		auto x = q.front(); q.pop();
		topo.push_back(x);
		for (auto v : adj[x]) {
			dp[v] = max(dp[v], dur[v] + dp[x]);
			if (--indeg[v]==0)q.push(v);
		}
	}
	if (topo.size() != n)return -1; // contains cycle !!!
	return *max_element(dp.begin(), dp.end());
}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        int duration[n + 5];
        vector<pair<int, int>> dependency;
        for (int i = 0; i < n; i++) cin >> duration[i];
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            dependency.push_back({x, y});
        }
        Solution obj;
        cout << obj.minTime(dependency, duration, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends