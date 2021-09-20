//https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> factorial(int N){
         vector<int> v(1);
        v[0]=1;
        int t=N;
        int c=0,x=1,p=0;
        for(int i=2;i<=t;i++)
        {
            for(int j=0;j<x;j++)
            {
            p=v[j]*i+c;
            v[j]=(p)%10;
            c=p/10;
            }
            while(c)
            {
                v.push_back(c%10);
                c=c/10;
                x++;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  