/*
    Problem:            9. Addition Under Modulo
    Path:               GFG/DSA Self Paced/Mathematics/Problems/
    Date:               25/07/2021
    Last Updated:       25/07/2021
    Author:             Rushiraj Parekh
*/

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long int mod = 1e9+7;
        return (a%mod + b%mod)%mod;
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends