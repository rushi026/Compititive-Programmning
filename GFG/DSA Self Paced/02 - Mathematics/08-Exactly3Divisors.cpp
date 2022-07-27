/*
    Problem:            8. Exactly 3 Divisors
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
    int exactly3Divisors(int N)
    {
        int c=0;
        for(int i=2; i*i<=N; i++){
            if(i == 2) c++;
            if(i == 3) c++;
            if(i%2 == 0 || i%3 == 0) continue;
            bool temp = true;
            for(int j=5; j*j<=i; j+=6){
                if(i%j == 0 || i%(j+2) == 0) temp = false;
            }
            if(temp) c++;
            else continue;
        }
        return c;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends