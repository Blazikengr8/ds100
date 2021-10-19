//https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
      stack<int> st;  //most popular Q
        long long ans=-1;
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                int x=st.top();
                st.pop();
                long long temp=arr[x]*(st.empty()? i : i-st.top()-1);
                ans=max(temp,ans);
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int x=st.top();
            st.pop();
            long long temp=arr[x]*(st.empty()? n : n-st.top()-1);
            ans=max(ans,temp);
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends