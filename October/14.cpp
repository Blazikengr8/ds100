//https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/1
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	int e=n & 0xAAAAAAAA;
    	int o=n & 0x55555555;
    	return e>>1 | o<<1;
    }
};
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}