// https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1#
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	   int l = 1, r = 1e9;
	    while(l<=r){
	        int mid = (l+r)/2;
	        int64_t p = 1;
	        for(int i=0; i<n; i++){
	            p *= mid;
	            if(p>m){
	                break;
	            }
	        }
	        if(p == m){
	            return mid;
	        }
	        else if(p>m){
	            r = mid-1;
	        }
	        else{
	            l = mid+1;
	        }
	    }
	    return -1;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends