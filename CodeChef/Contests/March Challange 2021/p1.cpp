/*
    Problem:            No Time to Wait
    Problem link:       https://www.codechef.com/MARCH21C/problems/NOTIME
    Contest:            March Challenge 2021 Division 3
    Date:               10/03/2021
    Last Updated:       10/03/2021
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

ll n, x, h, i;
bool t = false;

void solve()
{
    t = false;
    cin>>n>>h>>x;
    ll a[n];
    loop(i,0,n,1) {
        cin>>a[i];
        if(a[i] + x >= h)
            t = true;
    }
    if(t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
