/*
    Problem:            Highest Divisor
    Problem link:       https://www.codechef.com/FEB21C/problems/HDIVISR
    Contest:            February Challenge 2021 Division 3 
    Date:               08/02/2021
    Last Updated:       08/02/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n,i;
    cin>>n;
    rloop(i,10,1,1)
    {
        if(n%i == 0)
        {
            cout<<i<<endl; return;
        }
    }
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
