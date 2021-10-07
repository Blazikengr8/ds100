#https://practice.geeksforgeeks.org/problems/20290dc4188d384ae1f17d6a14bd2c95ea7012a8/1#
class Solution:
    def maxFrequency(self, S):
        ans=1
        c=0
        for i in range(0,len(S)):
            str1=S[0:i]
            str2=S[-i:]
            if str1 == str2:
                c=S.count(str1)
            ans=max(ans,c)    
        return ans    
from collections import defaultdict

if __name__ == '__main__':
    T = int(input())

    for _ in range(T):
        Str = input()
        obj = Solution()

        print(obj.maxFrequency(Str))