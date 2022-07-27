/*
    Problem:            13. Equilibrium Point
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               19/05/2022
    Last Updated:       19/05/2022
    Author:             Rushiraj Parekh
*/


#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n == 1) return 1;
        long long prefix[n], sufix[n];
        prefix[0] = a[0];
        for(int i=1; i<n; i++) prefix[i] = prefix[i-1] + a[i];
        sufix[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--) sufix[i] = sufix[i+1] + a[i];
        for(int i=1; i<n-1; i++) if(prefix[i-1] == sufix[i+1]) return i+1;
        if(sufix[0] == 0) return 1;
        if(prefix[n-1] == 0) return n;
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends