// https://practice.geeksforgeeks.org/problems/concatenation-of-zig-zag-string-in-n-rows0308/1#
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string convert(string s, int n) {
         if(n == 1)
            return s;
        map<int,string> mp;
        string res = "";
        for(int i = 0; i < n ; i ++){
            mp[i] = "";
        }
        int i = 0;
        int j = 0;
        while(i < s.length()){
            while(j <= n - 1 and i < s.length()){
                string t = mp[j];
                t += s[i];
                mp[j] = t;
                if(j == n - 1) break;
                j++;i++;
            }
            j--;i++;
            while(j >= 0 and i < s.length()){
                string t = mp[j];
                t += s[i];
                mp[j] = t;
                if(j == 0) break;
                j--;i++;
            }
            j++;i++;
        }
        for(auto i : mp){
            res += i.second;
        }
        return res;
    }
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends