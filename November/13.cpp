// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 //https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
       stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                {
                if(s[i]==')')
                {
                    if(st.top()=='(')
                    {
                        st.pop();
                    }
                     else
                    {
                        return false;
                    }
                }
                else if(s[i]=='}')
                {
                    if(st.top()=='{')
                    {
                        st.pop();
                    }
                     else
                    {
                        return false;
                    }
                }
                else if(s[i]==']')
                {
                    if(st.top()=='[')
                    {
                        st.pop();
                    }
                     else
                    {
                        return false;
                    }   
                }
            }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
        return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}