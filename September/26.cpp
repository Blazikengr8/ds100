// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int search(string pat, string txt) {
	    array<int,26> a={0};
	    array<int,26> b={0};
	    int c=0,d=0;
	    for(int i=0;i<pat.length();i++)
	    {
	        a[pat[i]-97]++;
	        b[txt[i]-97]++;
	    }
	    for(int i=pat.length();i<txt.length();i++)
	    {
	        if(a==b)
	        {
	            c++;
	        }
	         b[txt[i]-97]++;
	         b[txt[d]-97]--;
	         d++;
	    }
	    if(a==b)
	        {
	            c++;
	        }
	    return c;
	}
 
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  