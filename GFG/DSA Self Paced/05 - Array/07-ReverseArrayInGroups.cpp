/*
    Problem:            7. Reverse array in groups
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               18/05/2022
    Last Updated:       18/05/2022
    Author:             Rushiraj Parekh
*/


//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& a, int n, int k){
        for(int i = 0; i < n/k*k; i += k) {
            for(int j = i, p=1; j < i+k/2; j++) {
                a[j] += a[i+k-p];
                a[i+k-p] = a[j] - a[i+k-p];
                a[j] = a[j] - a[i+k-p++];
            }
        }
        for(int i = n/k*k, j = 1; i < n/k*k + (n%k)/2; i++) {
            a[i] += a[n-j];
            a[n-j] = a[i] - a[n-j];
            a[i] = a[i] - a[n-j++];
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends