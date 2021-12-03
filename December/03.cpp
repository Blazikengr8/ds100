// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
     int good=0;
       int bad=0;
       for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            good++;
        }
        for(int i=0;i<good;i++)
        {
            if(arr[i]>k)
            bad++;
        }
      int mn=bad;
      
      int i=0,j=good;
      while(j<n)
      {  
          if(arr[i]>k)bad--;
          if(arr[j]>k)bad++;
          mn=min(mn,bad);
         
          i++;j++;
      }
   
     return mn;  
       
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends