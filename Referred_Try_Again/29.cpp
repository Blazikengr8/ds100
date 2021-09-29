//https://practice.geeksforgeeks.org/problems/2caf0501a39567d653197364a2b5c8a9f5943b7e/1#
#include <bits/stdc++.h> 
#include <unordered_set>
using namespace std; 
class Solution{
    public:
    int candies(int m, int n) 
    { 
    	bool arr[m*n-m-n]={false};
    	arr[0]=true;
    	int ans=0;
    	for(int i=0;i<=m*n-m-n;i++)
    	{
    	    if(i>=m)
    	    {
    	        arr[i]=arr[i]|arr[i-m];
    	    }
    	    if(i>=n)
    	    {
    	        arr[i]=arr[i]|arr[i-n];
    	    }
    	    if(!arr[i])
    	    {
    	      ans++;  
    	    }
    	}
    	return ans;
    } 
};
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		Solution obj;
		cout << obj.candies(m,n)<<endl; 
	}
	return 0; 
} 