/*
    Problem:            7. Primality Test
    Path:               GFG/DSA Self Paced/Mathematics/Problems/
    Date:               25/07/2021
    Last Updated:       25/07/2021
    Author:             Rushiraj Parekh
*/


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
            
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for(int i=5; i*i<=n; i+=6){
            if(n%i==0 || n%(i+2)==0) return false;
        }
        return true;
        //Your code here
    }

};

// { Driver Code Starts.

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        Solution ob;
        if(ob.isPrime(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends