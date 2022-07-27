/*
    Problem:            5. Fibonacci Using Recursion
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               11/08/2021
    Last Updated:       11/08/2021
    Author:             Rushiraj Parekh
*/

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        if(n < 2) return n;
        return fibonacci(n-1) + fibonacci(n-2);
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends