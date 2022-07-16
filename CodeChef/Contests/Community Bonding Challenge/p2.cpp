// /*
//     Problem:            Even Sum Array
//     Problem link:       https://www.codechef.com/COBC2021/problems/EOSUM
//     Contest:            Community Bonding Challenge
//     Date:               31/01/2021
//     Last Updated:       31/01/2021
//     Author:             Rushiraj Parekh
// */

// #include <bits/stdc++.h>
// using namespace std;

// /***********************************/

// #define ll                  long long int
// #define ull                 unsigned long long int
// #define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
// #define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
// #define endl                '\n'
// #define vll                 vector<ll>
// #define scan(v)             for(auto &i : v) cin>>i;
// #define print(v)            for(auto i : v) cout<<i<<" ";
// #define pb                  push_back
// #define all(x)              x.begin(),x.end()
// #define _sort(x)            sort(all(x))
// #define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


// /***********************************/
// void solve()
// {
//     ll n;
//     cin>>n;
//     ll a[n], i, sum = 0;
//     loop(i,0,n,1)
//     {
//         cin>>a[i]; sum += a[i];
//     }
//     if(sum&1)
//         cout<<n-1<<endl;
//     else
//         cout<<n<<endl;
// }

// /***********************************/
// int main()
// {
//     speedy;
//     ll t=1;
//     cin>>t;
//     while(t--)
//         solve();
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long  int n;
        cin>>n;
        long long int a[n], i, sum = 0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum&1)
            cout<<n-1;
        else
            cout<<n;
        cout<<endl;
    }
}