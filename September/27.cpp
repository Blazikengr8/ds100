//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 
class Solution{
    public:
    int getMiddle(Node *head)
    {
        Node* temp=head;
        Node* current=head;
        int c=1,s=temp->data;
        while(current!=NULL)
        {
            current=current->next;
            if(c%2==0)
            {
                temp=temp->next;
                s=temp->data;
            }
            c++;
        }
        return s;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}
