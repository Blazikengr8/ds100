// https://practice.geeksforgeeks.org/problems/0cba668df04d657fde4d1bd28b626a01e61097f1/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int repeatedStringMatch(string A, string B) 
    {
       int n=A.length();
       int m=B.length();
       int c=1;
       int flag=0;
       string Ao=A;
       if(n<=2*m)
       {
       while(n<=2*m)
       {
           n=A.length();
          size_t found=A.find(B);
          if (found!=std::string::npos)
          {
              flag=1;
              break;
          }
          else
          {
              A=A+Ao;
              c++;
          }
       }
       if(flag==1)
       return c;
       else
       return -1;
       }
       else
       {
           size_t found=A.find(B);
          if (found!=std::string::npos)
          {
              return c;
          }
          else
          {
              return -1;
          }
       }
    }
  
};
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}