//https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int maxSubstring(string S)
	{
	    int m = INT_MIN, m1= 0;
	    for(int i=0;i<S.length();i++)
	    {
	        
	    if(S[i]=='0')
	    {
	        m1++;
	    }
	    if(S[i]=='1')
	    {
	        m1--;
	    }
        if (m < m1)
            m = m1;
 
        if (m1 < 0)
            m1 = 0;
	    }
	    return m;
	}
};
int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}