//https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
           sort(arr,arr+n);
           int ans=INT_MAX,i=0,j=n-1;
           while(i<j){
               int x=arr[i]+arr[j];
               if(abs(x-0)<abs(ans-0))//sum which is near to zero
               {
                   ans=x;
               }
               if(abs(ans)==abs(x))//if two numbers are at same distance from zero
               {
                   ans=max(ans,x);
               }
               if(x<0){
                   i++;
               }else{
                   j--;
               }
           }
           return ans;
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends