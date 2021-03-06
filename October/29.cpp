// https://practice.geeksforgeeks.org/problems/620fb6456d6515faddd77050dfbf2821d7a94b8a/1

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int find_min(int a[], int n, int k) {
         int p=0;int sum=0;
       for(int i=0;i<n;i++){
           p+=a[i]/2;
           if(a[i]%2==0){
               sum+=(a[i]-2)/2;
           }else{
               sum+=(a[i]-1)/2;
           }
       }
       if(p<k){
           return -1;
       }else if(sum>=k){
           return (2*(k-1))+n+1;
       }else{
           return (2*sum)+n+(k-sum);
       }
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> k;
        Solution obj;
        cout << obj.find_min(a, n, k) << endl;
    }
    return 1;
}
  // } Driver Code Ends