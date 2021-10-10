//https://practice.geeksforgeeks.org/problems/3b76f77c1b2107f809b1875aa9fe929ce320be97/1
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    {   int s=0,e=n-1;long long ans=0;
        sort(a,a+n);
    	while(s!=e)
    	{
    	    if(a[s]+a[e]>0)
    	    {
    	        ans=ans+e-s;
    	        e--;
    	    }
    	    else
    	    {
    	        s++;
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
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 