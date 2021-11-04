//https://practice.geeksforgeeks.org/problems/four-elements2452/1#
#include <bits/stdc++.h>
using namespace std;
bool find4Numbers(int A[], int n, int X);
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
bool find4Numbers(int a[], int n, int x)  
{
   sort(a,a+n);
   int r=n-1,flag=0;
   for(int i=0;i<n-3;i++)
   {
       for(int j=i+1;j<n-2;j++)
       {
           r=n-1;
           for(int k=j+1;k<r;)
           {
               if(a[i]+a[j]+a[k]+a[r]<x)
               {
                   k++;
               }
               else if(a[i]+a[j]+a[k]+a[r]>x)
               {
                   r--;
               }
               else
               {
                   flag=1;
                   break;
               }
           }
       }
   }
   if(flag)
   {
       return true;
   }
   else
   {
       return false;
   }
}