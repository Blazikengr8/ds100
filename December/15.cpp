// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int K) {
                vector<long long> ans;
        int i=0,j=0;
        queue<long long> q;
        while(j<N){
            if(j-i+1<K and arr[j]<0) q.push(arr[j]);
            else if(j-i+1==K){
                if(arr[j]<0) q.push(arr[j]);
                if(q.size()==0) ans.push_back(0);
                else{
                    ans.push_back(q.front());
                    if(arr[i]<0) q.pop();
                }
                i++;
            }
            j++;
        }
        return ans;                                 
 }