/*
    Problem:            2. Sum of Digits of a Number
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               11/08/2021
    Last Updated:       11/08/2021
    Author:             Rushiraj Parekh
*/


//Initial Template for C++



#include <iostream>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        if(n < 10) return n;
        return n%10 + sumOfDigits(n/10);
    }
};

// { Driver Code Starts.


int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends