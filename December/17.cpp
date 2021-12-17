//https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1#
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Node{
    public:
    int freq;
    Node *left,*right;
    Node(int f){
        this->freq = f;
        this->left = this->right = nullptr;
    }
};
class Compare{
    public:
    inline bool operator()(Node *a, Node *b){
        return a->freq>b->freq;//min heap
    }
};
class Solution
{
	public:
	    void dfs(Node *root,string res, vector<string> &ans){
	        if(root == nullptr){
	            return;
	        }
	        if(root->left == nullptr && root->right == nullptr){
	            //leaf node
	            ans.push_back(res);
	            return;
	        }
	        dfs(root->left,res+'0',ans);
	        dfs(root->right,res+'1',ans);
	    }
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<Node*,vector<Node*>,Compare> pq;
		    for(int i=0; i<N; i++){
		        Node *newNode = new Node(f[i]);
		        pq.push(newNode);
		    }
		    // build tree of size O(N)
		    while((int)pq.size() > 1){
		        Node *leftNode = pq.top(); pq.pop();//first top are always inserted right as they come later
		        Node *rightNode = pq.top(); pq.pop();
		        int newFreq = leftNode->freq+rightNode->freq;
		        Node *parentNode = new Node(newFreq);
		        parentNode->left = leftNode;
		        parentNode->right = rightNode;
		        pq.push(parentNode);
		    }
		    
		    //final remaining is root node
		    Node *root = pq.top(); pq.pop();
		    vector<string> ans;
		    string res = "";
		    dfs(root, res, ans);
		    return ans;
		}
};
// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}  // } Driver Code Ends