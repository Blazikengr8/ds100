// https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        string res="";
       int n = s.size();
       string temp="";
       for(int i =0; i<n; i++)
       {
          if(s[i]!='.') 
          {
            temp+=s[i];  
          }
          else
          {
              res+=reverse(temp)+".";
              temp = "";
          }
       }
      res+= reverse(temp);
       
     return res;
   }
   string reverse(string s)
   {
     int i =0; 
     
     int j = s.size()-1;
     while(i<j)
     {
       swap(s[i],s[j]);
       i++;
       j--;
     }
     return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends