/*
    Problem:            14. Leaders in an array
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               19/05/2022
    Last Updated:       19/05/2022
    Author:             Rushiraj Parekh
*/



// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int curLead = a[n-1], j=1;
        vector<int> ans(n);
        ans[0] = a[n-1];
        for(int i=n-2; i>=0; i--) {
            if(a[i] >= curLead) {
                curLead = a[i];
                ans[j++] = curLead;
            }
        }
        vector<int> temp(j);
        for(int i=0; i<j; i++) temp[i] = ans[j-i-1];
        return temp;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends