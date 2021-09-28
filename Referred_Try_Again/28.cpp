// https://practice.geeksforgeeks.org/problems/sort-a-stack/1#
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

void sortInsert(stack<int> &s,int element)
{
    if(s.empty()||element>s.top())
    {
        s.push(element);
        return;
    }
    else
    {
        int temp=s.top();s.pop();
        sortInsert(s,element);
        s.push(temp);
        return;
    }
}
void SortedStack :: sort()
{
if(s.size() == 1){
       return;
   }
   
   int top = s.top(); s.pop();
   SortedStack::sort();
   sortInsert(s , top);
   
   return;

}