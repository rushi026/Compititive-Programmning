/*
    Problem:            1. Find first set bit
    Path:               GFG/DSA Self Paced/Bit Magic/Problems/
    Date:               30/07/2021
    Last Updated:       30/07/2021
    Author:             Rushiraj Parekh
*/

//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.

    // Efficient Solution
    unsigned int getFirstSetBit(int n)
    {
        return log2(n & -n) + 1;
    }

    // Naive Solution -1: 
        // unsigned int getFirstSetBit(int n)
        // {
        //     int c=1;
        //     // Your code here
        //     if (!n) return 0;
        //     while(true){
        //         if(!n) return c;
        //         if(n&1) return c;
        //         n >>= 1;
        //         c++;
        //     }
        //     return c;
        // }

    // Naive Solution -2:
        // unsigned int getFirstSetBit(int n)
        // {
        //     // Your code here
        //     if(n == 0) return 0;
        //     int k = 0;
            
        //     while(true){
        //         k++;
        //         if(n&1) return k;
        //         n >>= 1;
        //     }
        // }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends