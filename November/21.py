#https://practice.geeksforgeeks.org/problems/minimum-shift-for-longest-common-prefix0759/1
class Solution:
    def longestCommonPrefix(self, str1, str2):
        s=''
        ans=[0]
        for i in range(len(str1)):
            s=s+str1[i]
            if s not in str2:
                ans.append(i-1)
        if ans[1]==-1:
            return [-1,-1]
        else:   
            return ans        
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        str1 = input()
        str2 = input()
        ob = Solution()
        ans = ob.longestCommonPrefix(str1, str2)
        if ans[0] == -1:
            print(-1)
        else:
            print(ans[0], ans[1])

# } Driver Code Ends