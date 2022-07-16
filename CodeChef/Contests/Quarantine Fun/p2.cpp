/*
    Problem:            Scientists Fight
    Problem link:       https://www.codechef.com/QFUN2020/problems/SCTFIGHT
    Contest:            QUARANTINE FUN
    Date:               18/07/2020
    Last Updated:       18/07/2020
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
    ll n;
    cin>>n;
    ll i,a[n];
    loop(i,0,n,1)
        cin>>a[i];
    sort(a,a+n);
    ll ans = 1;
    ll temp = 1;
    loop(i,1,n,1)
    {
        if(a[i] == a[i-1])
            temp++;
        else
            temp = 1;
        ans = max(ans,temp);
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
