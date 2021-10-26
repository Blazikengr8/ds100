//https://practice.geeksforgeeks.org/problems/7ba682ec660335b1627f2183f63bd2c8a37391ec/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int count(int n, vector<int> a,int x)
    {
        int msb = __lg(x), ans = n, temp = 0, vis[n] = {0};
	for (int i = 30; i >= 0; i--) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (!vis[j] && ((x >> i) & 1) && !((a[j] >> i) & 1) )temp++, vis[j] = 1;
			if (!((a[j] >> i) & 1) && !vis[j])cnt++;
		}
		if (!((x >> i) & 1))ans = min(ans, temp + cnt);
	}
	return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> A(N);
        for(auto &i:A)
            cin>>i;
        Solution obj;
        int ans = obj.count(N, A, X);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends