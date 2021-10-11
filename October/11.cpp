//https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1#
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        set<pair<int,int>>s;
        sort(intervals.begin(),intervals.end());
        int l=intervals[0][0];int r=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=r)
            {
                r=max(intervals[i][1],r);
            }
            else
            {
                 if(s.insert(make_pair(l,r)).second)
                 {
                   ans.push_back({l,r});
                 }
                  l=intervals[i][0];
                r=intervals[i][1];
            }
        }
        if(s.insert(make_pair(l,r)).second)
                 {
                   ans.push_back({l,r});
                 }
        return ans;
    }
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}