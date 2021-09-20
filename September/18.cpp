//https://practice.geeksforgeeks.org/problems/sum-of-query-ii5310/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        vector<int> ans;
        int s=0;
        for(int i=0;i<q*2;i+=2)
        {
            int l=queries[i];
            int r=queries[i+1];
            s=0;
            for(int j=l-1;j<r;j++)
            {
                s=s+arr[j];
            }
            ans.push_back(s);
        }
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cin>>q;
        int queries[2*q];
        for(int i = 0;i < 2*q;i += 2)
            cin>>queries[i]>>queries[i+1];
        
        Solution ob;
        vector<int> ans = ob.querySum(n, arr, q, queries);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}