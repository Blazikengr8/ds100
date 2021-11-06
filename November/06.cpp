// https://practice.geeksforgeeks.org/problems/division-without-using-multiplication-division-and-mod-operator/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
    int64_t ans = 0, sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;
    dividend = abs(dividend), divisor = abs(divisor);
    for (int i = 30; i >= 0; i--) {
        if (dividend >= (divisor << i))dividend -= (divisor << i), ans += (1LL << i);
    }
    if (sign == -1)ans = -ans;
    return ans;
    }
};
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}