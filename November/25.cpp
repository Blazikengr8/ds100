// https://practice.geeksforgeeks.org/problems/minimum-sum4058/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    string solve(int arr[], int n) {
        string ans;
    int carry = 0;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--) {
        int cur = arr[i] + carry;
        if (i)i--, cur += arr[i];
        carry = cur / 10, cur %= 10;
        ans.push_back(char(cur + '0'));
    }
    if (carry)ans.push_back(char(carry + '0'));
    while (ans.back() == '0')ans.pop_back();
    reverse(ans.begin(), ans.end());
    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends