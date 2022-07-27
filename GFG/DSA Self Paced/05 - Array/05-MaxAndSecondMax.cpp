/*
    Problem:            5. Max and Second Max
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               18/05/2022
    Last Updated:       18/05/2022
    Author:             Rushiraj Parekh
*/


//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2 = -1;
        vector<int> temp(2);
        for(int i=0; i<sizeOfArray; i++) max = arr[i] > max ? arr[i] : max;
        for(int i=0; i<sizeOfArray; i++) max2 = arr[i] > max2 && arr[i] != max ? arr[i] : max2;
        temp[0] = max;
        temp[1] = max2;
        return temp;
    }
};

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
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends