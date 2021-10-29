#https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
import heapq
def kthSmallest(mat, n, k): 
    ls=[]
    for i in range(len(mat)):
        for j in range(len(mat[i])):
            ls.append(mat[i][j])
    heapq.heapify(ls)
    ans=heapq.nsmallest(k,ls)
    #print(ans[-1])
    return ans[-1]

def main():
    T=int(input())
    while(T>0):
        n = int(input())
        mat=[[0 for j in range(n)] for i in range(n)]
        line1=[int(x) for x in input().strip().split()]
        k = int(input())

        temp=0
        for i in range(n):
            for j in range (n):
                mat[i][j]=line1[temp]
                temp+=1
        
        print(kthSmallest(mat, n, k))
        T-=1


if __name__=="__main__":
    main()




# } Driver Code Ends