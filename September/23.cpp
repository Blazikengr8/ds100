//https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countSetBits(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i=i*2)
        {
            if(i==1)
            {
                if(n%2==0)
                {
                   sum=sum+n/2;
                   //cout<<sum<<endl;
                }
                else
                {
                    sum=sum+(n+1)/2; 
                }
            }
            else
            {
                int temp=(((n/i)+1)%2==0)?n%i+1:0;
                sum=sum+((n/i)/2)*i+temp;
               // cout<<n<<" "<<i<<" "<<temp<<" "<<sum<<endl;
            }
        }
        return sum;
    }
};
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
