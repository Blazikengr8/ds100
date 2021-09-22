#include<bits/stdc++.h>
using namespace std;
int repeatedStringMatch(string A, string B) 
    {
       int n=A.length();
       int m=B.length();
       string Ao=A;
       int c=1;
       int flag=0;
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
       return c;
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
    int main()
    {
        string s,s1;
        cin>>s>>s1;
        cout<<repeatedStringMatch(s,s1)<<endl;
    }