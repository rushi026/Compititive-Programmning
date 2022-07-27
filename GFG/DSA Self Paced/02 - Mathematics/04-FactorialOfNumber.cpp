/*
    Problem:            4. Factorial Of Number
    Path:               GFG/DSA Self Paced/Mathematics/Problems/
    Date:               25/07/2021
    Last Updated:       25/07/2021
    Author:             Rushiraj Parekh
*/


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
long long factorial(int);

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
        // Complete this function
    unsigned long long int factorial(int n) {
        // Your code here
        unsigned long long int a = 1;
        for(int i=2; i<=n; i++) a *= i;
        return a;
    }

};

// { Driver Code Starts.
int main() {
    int T, N;
    cin >> T; // input number of testcases
    while (T--) {
        cin >> N; // input n
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}
  // } Driver Code Ends