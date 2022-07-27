/*
    Problem:            10. Multiplication Under Modulo
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
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        long long int mod = 1e9+7;
        return ((a%mod) * (b%mod))%mod;
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    
	    //taking input a and b
	    cin>>a>>b;
	    Solution ob;
	    //calling multiplicationUnderModulo() function
	    cout<<ob.multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends