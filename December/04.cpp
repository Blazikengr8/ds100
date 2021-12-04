// https://practice.geeksforgeeks.org/problems/find-last-digit-of-ab-for-large-numbers1936/1
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getLastDigit(string a, string b) {
         int x = (a.back() - '0'), v = 0;
    if (b.size() == 1 && b[0] == '0')return 1;
    for (auto c : b)(v *= 10) %= 4, (v += (c - '0')) %= 4;
    return ((int)pow(x, (v == 0) ? 4 : v)) % 10;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getLastDigit(a,b) << endl;
    }
    return 0;
}  // } Driver Code Ends