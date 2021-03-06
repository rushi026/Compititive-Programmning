/*
    Problem:            Chef and Steps
    Problem link:       https://www.codechef.com/LTIME86B/problems/CHEFSTEP
    Contest:            July Lunch Time
    Date:               25/07/2020
    Last Updated:       25/07/2020
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
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll i;
    loop(i,0,n,1)
        cin>>a[i];
    loop(i,0,n,1)
    {
        if(a[i] % k == 0)
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;
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
