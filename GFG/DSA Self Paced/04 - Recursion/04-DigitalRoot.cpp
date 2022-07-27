/*
    Problem:            4. Digital Root
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

int my(int n){
    if(n < 10) return n;
    return n%10 + my(n/10);
}
    
class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        int ans = n;
        while(ans > 9) ans = my(ans);
        return ans;
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends