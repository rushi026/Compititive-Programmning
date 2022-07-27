/*
    Problem:            1. Print 1 To N Without Loop
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               11/08/2021
    Last Updated:       11/08/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N == 0) return;
        printNos(N-1);
        cout<<N<<" ";
    }
};

// { Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends