//https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
        long long ans=0;
        int MOD = 1000000007;
        for(long long i=0;i<n;i++)
        {
            ans= ((ans%MOD) + ((i*a[i])%MOD))%MOD;
        }
        return ans%MOD;
    }
};
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}