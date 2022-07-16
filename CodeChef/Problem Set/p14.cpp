/*
    Problem:            Even Sum
    Problem link:       https://www.codechef.com/LTIME92C/problems/EVENGAME
    Contest:            January Lunchtime 2021 Division 3
    Date:               03/02/2021
    Last Updated:       03/02/2021
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
    ll n, i, s=0;
    cin>>n;
    vll a(n);
    loop(i,0,n,1)
    {
        cin>>a[i];
        s += a[i];
    }
    if(s&1)
        cout<<2<<endl;
    else
        cout<<1<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
