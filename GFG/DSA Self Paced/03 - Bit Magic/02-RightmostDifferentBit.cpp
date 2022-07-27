/*
    Problem:            2. Rightmost different bit
    Path:               GFG/DSA Self Paced/Bit Magic/Problems/
    Date:               05/10/2021
    Last Updated:       05/10/2021
    Author:             Rushiraj Parekh
*/


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int k=0;
        while(true){
            k++;
            if((m&1) != (n&1)) return k;
            m >>= 1; n >>= 1;
        }
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends