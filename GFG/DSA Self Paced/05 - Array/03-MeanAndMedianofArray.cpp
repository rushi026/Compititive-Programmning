/*
    Problem:            3. Mean And Median of Array
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               18/05/2022
    Last Updated:       18/05/2022
    Author:             Rushiraj Parekh
*/


//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        if(N&1) return A[N/2];
        return (A[N/2-1] + A[N/2]) / 2;
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum=0;
        for(int i=0; i<N; i++) sum += A[i];
        return sum/N;
    }
};


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        Solution ob;
        //calling mean() and median() functions
        cout<<ob.mean(a,N)<<" "<<ob.median(a,N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends