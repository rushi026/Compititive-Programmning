/*
    Problem:            8. Rotate Array
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               19/05/2022
    Last Updated:       19/05/2022
    Author:             Rushiraj Parekh
*/

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int a[], int d, int n){
        d = d%n;
        if(!d) return;
        for(int i = 0, j = 0; i < d/2; i++) {
            a[i] += a[d-j-1];
            a[d-j-1] = a[i] - a[d-j-1];
            a[i] -= a[d-1-j++];
        }
        for(int i = d, j = 1; i < d + (n-d)/2; i++) {
            a[i] += a[n-j];
            a[n-j] = a[i] - a[n-j];
            a[i] -= a[n-j++];
        }
        for(int i = 0; i < n/2; i++) {
            a[i] += a[n-i-1];
            a[n-i-1] = a[i] - a[n-i-1];
            a[i] -= a[n-i-1];
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends