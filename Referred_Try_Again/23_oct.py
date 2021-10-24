#User Template for python3

'''
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

class Solution:
    #Your Function Should return True/False
    def isHeap(self, root):
            from collections import deque
            qu=deque()
            qu.append(root)
            while qu:
                node=qu.popleft()
                if not node: 
                	# if encountered a Null node then all subsequent nodes must be null
                    while qu:
                        if qu.popleft():return False
                else:
                    l=node.left
                    r=node.right
                    if l and r:
                    #parent node should have higher data than child nodes 
              		     if node.data<l.data or node.data<r.data:
                               return False
                    elif l and not r:
                        if node.data<l.data:return False
                    # right child is allowed only if there is a left child . unnecessary but this  prevents the necessity of  the second while loop execution in some cases
                    elif not l and r:
                        return False
                    qu.append(l)
                    qu.append(r)
            return True 

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#Contributed by Susanta Mukherjee
import sys
sys.setrecursionlimit(10**6)
from collections import deque
# Tree Node
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

    
# Function to Build Tree   
def buildTree(s):
    #Corner Case
    if(len(s)==0 or s[0]=="N"):           
        return None
        
    # Creating list of strings from input 
    # string after spliting by space
    ip=list(map(str,s.split()))
    
    # Create the root of the tree
    root=Node(int(ip[0]))                     
    size=0
    q=deque()
    
    # Push the root to the queue
    q.append(root)                            
    size=size+1 
    
    # Starting from the second element
    i=1                                       
    while(size>0 and i<len(ip)):
        # Get and remove the front of the queue
        currNode=q[0]
        q.popleft()
        size=size-1
        
        # Get the current node's value from the string
        currVal=ip[i]
        
        # If the left child is not null
        if(currVal!="N"):
            
            # Create the left child for the current node
            currNode.left=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.left)
            size=size+1
        # For the right child
        i=i+1
        if(i>=len(ip)):
            break
        currVal=ip[i]
        
        # If the right child is not null
        if(currVal!="N"):
            
            # Create the right child for the current node
            currNode.right=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.right)
            size=size+1
        i=i+1
    return root
    


if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        root=buildTree(input())
        ob = Solution()
        if ob.isHeap(root):
            print(1)
        else:
            print(0)
        
        

# } Driver Code Ends