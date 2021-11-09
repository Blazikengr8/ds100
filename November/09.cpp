//https://practice.geeksforgeeks.org/problems/974612adac31d8e35448df5879342690f841c532/1#
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    
    public:
    int RulingPair(vector<int> arr, int n) 
    { 
    	map<int,int> m;
    	int maximum=-1;
    	sort(arr.begin(),arr.end());
    	for(int i=n-1;i>=0;i--)
    	{
    	    int t=arr[i];
    	    int d=0;
    	    while(t!=0)
    	    {
    	        d=d+t%10;
    	        t/=10;
    	    }
    	    if(m[d]>0)
    	    {
    	        maximum=max(maximum,m[d]+arr[i]);
    	    }
    	    m[d]=arr[i];
    	}
    	return maximum;
    }   
};
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
	    Solution obj;
		cout << obj.RulingPair(arr,n)<<"\n";
	}
	return 0; 
} 