#https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1#
class Solution:
    def maxLen(self, n, arr):
        ls={}
        ls[0]=-1;
        s=0
        ans=0
        for i in range(0,n):
            s=s+arr[i]
            if s in ls:
                ans=max(ans,i-ls[s])
            else:
                ls[s]=i
        return ans     
if __name__=='__main__':
    t= int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.maxLen(n ,arr))
