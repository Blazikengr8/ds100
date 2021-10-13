//https://practice.geeksforgeeks.org/problems/interleaved-strings/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    bool recur(string A,string B,string C,int a1,int a2,int a3)
    {
        if(a1==A.length() && a2==B.length() && a3==C.length())
        {
            return true;
        }
        if(a3==C.length())
        {
            return false;
        }
        return (A[a1]==C[a3] && recur(A,B,C,a1+1,a2,a3+1)) || (B[a2]==C[a3] && recur(A,B,C,a1,a2+1,a3+1));
    }
    bool isInterleave(string A, string B, string C) 
    {
      //  int a=A.length(),b=B.length(),c=C.length();
        return recur(A,B,C,0,0,0);
    }
};
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	return 0;
} 