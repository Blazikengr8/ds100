//https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1#
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
    Node* root = newNode(stoi(ip[0]));
    queue<Node*> queue;
    queue.push(root);
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if(currVal != "N") {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
        if(currVal != "N") {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
void printInorder(Node* root)
{
    if(!root)
        return;
        
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
class Solution
{
    public:
    vector<int> verticalOrder(Node *root)
    {
    queue<pair<Node *,int>> q;
    map<int,vector<int>> m;
    int i=0;
    q.push({root,0});
    while (q.empty() == false)
    {
        Node *node = q.front().first;
        i=q.front().second;
        q.pop();
        m[i].push_back(node->data);
        if (node->left != NULL)
            q.push({node->left,i-1});
        if (node->right != NULL)
            q.push({node->right,i+1});
    }
    vector<int> result;
    for(auto i:m)
    {
        for(auto j : i.second)
        {
            result.push_back(j);
        }
    }
    return result;
    }
};
int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Solution obj;
    	Node* root = buildTree(s);
    	
    	vector <int> res = obj.verticalOrder(root);
    	for (int i : res) cout << i << " ";
        cout << endl;
    }
	return 0;
}