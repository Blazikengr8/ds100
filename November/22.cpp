// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n==0||n==1)
       return 0;
       int dzero=false;
       if(arr[0]==0)
       return -1;
       int mxrech=arr[0];
       int step=arr[0];
       int jump=0;
       for(int i=1;i<n-1;i++)
       {
           step--;
           mxrech=max(mxrech,arr[i]+i);
           if(step==0)
           {
               jump++;
               step=mxrech-i;
               if(step<=0)
               return -1;
           }
       }
      return jump+1; 
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends