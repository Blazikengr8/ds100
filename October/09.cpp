//https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1#
#include<bits/stdc++.h>
using namespace std;
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int top=0,bot=n-1,l=0,r=m-1,ans=0,c=0;
        while(top<=bot&&l<=r)
        {
            if(c==0)
            {
            for(int i=l;i<=r;i++)
            {
                k--;
                if(k==0)
                {
                    ans=a[top][i];
                    break;
                }
            }
            top++;
            }
            else if(c==1)
            {
            for(int i=top;i<=bot;i++)
            {
               k--;
                if(k==0)
                {
                    ans=a[i][r];
                    break;
                } 
            }
            r--;
            }
            else if(c==2)
            {
            for(int i=r;i>=l;i--)
            {
                k--;
                if(k==0)
                {
                    ans=a[bot][i];
                    break;
                } 
            }
            bot--;
            }
            else if(c==3)
            {
            for(int i=bot;i>=top;i--)
            {
                k--;
                if(k==0)
                {
                    ans=a[i][l];
                    break;
                } 
            }
            l++;
            }
            c++;
            if(c>=4)
            c=c-4;
        }
        return ans;
    }

};
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}