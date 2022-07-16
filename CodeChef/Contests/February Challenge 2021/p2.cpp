/*
    Problem:            Maximise Function
    Problem link:       https://www.codechef.com/FEB21C/problems/MAXFUN
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
ll n,i, _min = INT32_MAX, _max = INT32_MIN;
ll temp(ll p, ll q, ll r)
{
    return (abs(p-q) + abs(q-r) + abs(r-p));
}

void solve()
{
    i=0;
    _min = INT32_MAX; _max = INT32_MIN;
    cin>>n;
    ll a[n];
    loop(i,0,n,1)
    {
        cin>>a[i];
        _max = max(_max, a[i]);
        _min = min(_min, a[i]);
    }
    ll ans = INT32_MIN;
    loop(i,0,n,1)
    {
        ans = max(ans, temp(_max, _min, a[i]));
    }
    cout<<ans<<endl;
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
