//https://practice.geeksforgeeks.org/problems/20b8ec4db3f8da0697acdd3d54d9af9f76405443/1
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]=abs(arr[i]-x);
        }
        vector<pair<int,int>> vec;
            copy(m.begin(),
            m.end(),
            back_inserter<vector<pair<int,int>>>(vec));
            sort(vec.begin(), vec.end(),
            [](const pair<int,int> &l, const pair<int,int> &r)
            {
                if (l.second != r.second) {
                    return l.second < r.second;
                }
 
                return l.first < r.first;
            });
            vector<int> ans;
            for(int i=0;i<k;i++)
            {
                ans.push_back(vec[i].first);
            }
            sort(ans.begin(),ans.end());
        return ans;
    } 
};
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k; 
		vector <int> array(n);
		for (int i = 0; i < n; ++i)
			cin>>array[i];
        
        Solution obj;
		vector <int> result = obj.Kclosest(array, n, x, k); 
		for (int i = 0; i < result.size(); ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}

	return 0; 
} 