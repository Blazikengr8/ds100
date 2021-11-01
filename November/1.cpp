//https://practice.geeksforgeeks.org/problems/circular-prime-number0230/1
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	bool isprime(int n)
    {
    bool flag=true;
    for(int i = 2; i <= n / 2; i++) {
       if(n % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
     }
	int isCircularPrime(int n) {
	    
	    int t=n,c=0;
	    if(n==1)
	    {
	        return 0;
	    }
	    while(t!=0)
	    {
	        c++;
	        t/=10;
	    }
	    t=n;
	   if(isprime(t))
	    {
	        //cout<<t<<endl;
	        t=(n%10)*pow(10,c-1)+n/10;
	        while(t!=n)
	        {
	            if(!isprime(t))
	            {
	                //cout<<t<<endl;
	                return 0;
	            }
	            t=(t%10)*pow(10,c-1)+t/10;
	        }
	    }
	    else
	    {
	        return 0;
	    }
	    return 1;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.isCircularPrime(n);
		cout << ans <<"\n";
	}  
	return 0;
}