//https://practice.geeksforgeeks.org/problems/minimum-insertions-to-make-two-arrays-equal/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minInsAndDel(int a[], int b[], int n, int m) {
        vector<int> new_a, lis, mp(1e5 + 1, 0);
    for (int i = 0; i < m; i++)mp[b[i]]++;
    for (int i = 0; i < n; i++)if (mp[a[i]])new_a.push_back(a[i]);
    for (auto x : new_a) { // finding LIS in O(NlogN) of new_a.
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if (it != lis.end())*it = x;
        else lis.push_back(x);
    }
    return n + m - 2 * lis.size();  // ans=n+m-2*LIS(new_A)
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        cin>>N>>M;
        
        int A[N], B[M];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<M; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.minInsAndDel(A,B,N,M) << endl;
    }
    return 0;
}