/*
    Problem:            6. GP Term
    Path:               GFG/DSA Self Paced/Mathematics/Problems/
    Date:               25/07/2021
    Last Updated:       25/07/2021
    Author:             Rushiraj Parekh
*/


//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        return A * (double)pow((B/(double)A),N-1);
    }
};

// { Driver Code Starts.


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }

    return 0;
}

  // } Driver Code Ends