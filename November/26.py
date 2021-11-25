# https://practice.geeksforgeeks.org/problems/money-distributions5924/1
import math
class Solution:
	def totalWays(self, N, k):
		MOD = 1000000007
		if k > n:
	        return 0
        ans = math.factorial(n-1)//(math.factorial(n-k) * math.factorial(k-1))
        return ans%MOD

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, k = input().split()
		n = int(n)
		k = int(k)
		ob = Solution()
		ans = ob.totalWays(n, k)
		print(ans)

# } Driver Code Ends