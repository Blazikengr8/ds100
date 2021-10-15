//https://practice.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1#
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    set<vector<int>> ans;
    void solve(vector<int> &arr,int idx,int n){
        if(idx>=n){
            return;
        }
        
        for(int i=idx; i<n; i++){
            swap(arr[idx],arr[i]);
            ans.insert(arr);//insert this in hash set
            solve(arr,idx+1,n);
            swap(arr[idx],arr[i]);//same as before iteration
        }
    }
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        vector<vector<int>> final;
        ans.insert(arr);
        solve(arr,0,n);
        for (auto x : ans){
            final.push_back(x);
        }
        return final;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}