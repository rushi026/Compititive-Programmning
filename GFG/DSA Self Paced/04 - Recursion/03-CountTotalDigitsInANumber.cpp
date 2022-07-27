/*
    Problem:            3. Count Total Digits in a Number
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
    //Complete this function
    int countDigits(int n)
    {
       if(n < 10) return 1;
       return countDigits(n/10) + 1;
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
	    
	    //taking number n
	    cin>>n;
	    
	    //calling countDigits
	    Solution obj;
	    cout<<obj.countDigits(n)<<endl;
	    
	    
	}
	return 0;
}


  // } Driver Code Ends