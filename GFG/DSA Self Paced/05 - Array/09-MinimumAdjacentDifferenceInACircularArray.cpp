/*
    Problem:            9. Minimum adjacent difference in a circular array
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               19/05/2022
    Last Updated:       19/05/2022
    Author:             Rushiraj Parekh
*/


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int a[], int n){    
        int res = INT_MAX;
        for(int i=1; i<n; i++) {
            res = abs(a[i-1] - a[i]) < res ? abs(a[i-1] - a[i]) : res;
        }
        res = abs(a[n-1] - a[0]) < res ? abs(a[n-1] - a[0]) : res;
        return res;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends