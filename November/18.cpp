//https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1#
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    static bool s(const pair<int,int> &a,const pair<int,int> &b)
    {
        return a.second<b.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>> m;
       for(int i=0;i<n;i++)
       {
           m.push_back(make_pair(start[i],end[i]));
       }
       sort(m.begin(),m.end(),s);
       int a=0,c=0;
       for(int i=0;i<n;i++)
       {
           //cout<<m[i].first<<" "<<m[i].second<<endl;
           if(m[i].first>a)
           {
               c++;
               a=m[i].second;
           }
       }
       
       return c;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}