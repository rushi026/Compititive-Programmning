/*
    Problem:            Lockdown
    Problem link:       https://www.codechef.com/CP7D2021/problems/CHEFBREA
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
    ll a,b;
    cin>>a>>b;
    if(a == b)
    {
        cout<<1<<endl;
        return;
    }
    ll temp = a*b;
    ll i, start = ceil(sqrt(temp));
    rloop(i,start,1,1)
    {
        if(temp % (i*i) == 0)
        {
            cout<<(temp / (i*i)); return;
        }
    }
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
