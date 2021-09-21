//https://practice.geeksforgeeks.org/problems/10471201e923a0b88a0c1482e6c7e8cc6fdfe93a/1
#include<bits/stdc++.h> 
using namespace std; 
class Solution{
    
    public:
    int maxCandy(int a[], int n) 
    { 
        int m=0,j=n-1,s=0;
        for(int i=0;i<j;)
        {
            m=min(a[i],a[j])*(j-i-1);
            if(a[i]<=a[j])
            {
                i++;
            }
            else 
            {
                j--;
            }
            s=max(s,m);
        }
        return s;
    }   
};
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}