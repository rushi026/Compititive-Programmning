/*
    Problem:            4. Who has the majority?
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               18/05/2022
    Last Updated:       18/05/2022
    Author:             Rushiraj Parekh
*/

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        int xx=0, yy=0;
        if(x < y) {
            x = x+y;
            y = x-y;
            x = x-y;
        }
        for(int i=0; i<n; i++) if(arr[i] == x) xx++; else if(arr[i] == y) yy++;
        return xx > yy ? x : y;
    }
};

// { Driver Code Starts.
int main() {

    int t; // Testcases
    cin >> t; // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        cin >> n; // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n;
             i++) // Running a loop to input all elements of arr
            cin >> arr[i];

        int x, y; // declare x and y
        cin >> x >> y; // input x and y
        Solution obj;
        cout << obj.majorityWins(arr, n, x, y)
             << endl; // calling the function that you complete
    }

    return 0;
}  // } Driver Code Ends