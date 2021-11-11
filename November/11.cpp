//https://practice.geeksforgeeks.org/problems/count-the-number-of-subarrays/1#
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long countSubarray(int n, vector<int> A, long long L, long long R) {
    int64_t ans = 0, l = 0, r = 0, sum = 0;
    while (r < n) {
        sum += A[r];
        while (l <= r && sum > R)sum -= A[l], l++;
        ans += r - l + 1;
        r++;
    }
    r = 0, l = 0, sum = 0;
    while (r < n) {
        sum += A[r];
        while (l <= r && sum >= L)sum -= A[l], l++;
        ans -= r - l + 1;
        r++;
    }
    return ans;
}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}