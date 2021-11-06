//https://practice.geeksforgeeks.org/problems/anagram-1587115620/1#
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isAnagram(string a, string b){
        
    unordered_map<char,int> m;
    unordered_map<char,int> m2;
    if(a.length()!=b.length())
    {
        return false;
    }
    else
    {
        for(int i=0;i<a.length();i++)
        {
            m[a[i]]++;
        }
        for(int i=0;i<b.length();i++)
        {
            m2[b[i]]++;
        }
        if(m==m2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }      
    }
};
int main() {  
    int t;
    cin >> t;
    while(t--){
        string c, d;
        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}