/*
    Problem:            6. Tower Of Hanoi
    Path:               GFG/DSA Self Paced/Recursion/Problems/
    Date:               11/08/2021
    Last Updated:       11/08/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long int i = 0;
    
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        this->i++;
        if (n == 1)
        {
            cout << "move disk 1 from rod " << from << " to rod " << to<<endl;
            return this->i;
        }
        toh(n - 1, from, aux, to);
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        toh(n - 1, aux, to, from);
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends