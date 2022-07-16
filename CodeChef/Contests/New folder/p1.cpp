/*
    Problem:            Metrology Station
    Problem link:       https://www.codechef.com/CP7D2021/problems/CHEFTEMP
    Contest:            CP in 7 days
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
    vll a(7), b(7);
    scan(a); scan(b);
    ll s=0, i;
    loop(i,0,7,1)
    {
        s += abs(a[i] - b[i]);
    }
    cout<<s<<endl;
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
