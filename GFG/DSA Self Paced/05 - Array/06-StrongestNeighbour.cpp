/*
    Problem:            6. Strongest Neighbour
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               18/05/2022
    Last Updated:       18/05/2022
    Author:             Rushiraj Parekh
*/


//Initial Template for C++

// CPP code to find maximum of 
// all subarray of size two
#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int, int[]);


 // } Driver Code Ends
//User function Template for C++

// Function to find maximum for every adjacent pairs in the array.
void maximumAdjacent(int n, int a[]){
    for(int i=1; i<n; i++) cout<<(a[i] > a[i-1] ? a[i] : a[i-1])<<" ";
}

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    maximumAdjacent(sizeOfArray, arr);
	    cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends