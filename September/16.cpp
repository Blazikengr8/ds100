// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v;
       int ans=1;
       for(int i=0;i<n;i++)
        v.push_back(make_pair(end[i],start[i])); 
        sort(v.begin(),v.end());
        int c=v[0].first;
        for(int i=1;i<n;i++){
        if(c<v[i].second){
           ans++;
           c=v[i].first;
          }
        }
        return ans;
     }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} 