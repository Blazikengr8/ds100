//https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}
int countRev (string s)
{
   if(s.length()%2==1)return -1;
   stack<char>st;
   int count=0;
   for(int i=0;i<s.length();++i){
       if(s[i]=='{'){
           st.push(s[i]);
       }else if(s[i]=='}'){
           if(!st.empty()){
               st.pop();
           }else{
               count++;
               st.push('{');
           }
       }
   }
   while(!st.empty()){
       if(st.top()=='{'){
           st.pop();
           if(!st.empty()&&st.top()=='{'){
               st.pop();
               count++;
           }
       }
   }
   return count;
}