/*
    Problem:            3. Quadratic Equation Roots
    Path:               GFG/DSA Self Paced/Mathematics/Problems/
    Date:               25/07/2021
    Last Updated:       25/05/2022
    Author:             Rushiraj Parekh
*/

// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        if((b*b) - (4*a*c) < 0) {
            vector<int> a(1);
            a[0] = -1;
            return a;
        }
        vector<int> v(2);
        v[0] = floor(((b-2*b) + sqrt((b*b) - (4*a*c)))/(2.0*a));
        v[1] = floor(((b-2*b) - sqrt((b*b) - (4*a*c)))/(2.0*a));
        sort(v.begin(), v.end(), greater<int>());
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends