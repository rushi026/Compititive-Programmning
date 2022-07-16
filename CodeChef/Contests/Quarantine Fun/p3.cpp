/*
    Problem:            Circles and Jumps
    Problem link:       https://www.codechef.com/QFUN2020/problems/CRCLJUMP
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
    ll x,y;
    cin>>x>>y;
    ll ans1=0, ans2=0;

    while((x+1)> 0)
    {
        ll temp = floor(log(x+1) / log(2));
        x -= (pow(2,temp));
        ans1++;
    }
    while((y+1) > 0)
    {
        ll temp = floor(log(y+1) / log(2));
        y -= (pow(2,temp));
        ans2++;
    }

    if(ans1 == ans2)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(ans1 < ans2)
    {
        cout<<1<<" "<<ans2-ans1<<endl;
        return;
    }
    else
    {
        cout<<2<<" "<<ans1-ans2<<endl;
        return;
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
