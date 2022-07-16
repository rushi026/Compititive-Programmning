/*
    Problem:            Maximum Candies
    Problem link:       https://www.codechef.com/LTIME86B/problems/CHECHOC
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
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    ll ans = 0;
    if(y <= (x*2))
    {
        ll temp;
        temp = (((m+1)*(n+1)/4) + ((m-1)*(n-1)/4));
        ans += (temp * x);
        ans += (((n*m)-temp)*(y-x));
        cout<<ans<<endl;
        return;
    }
    else
    {
        cout<<n*m*x<<endl;
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
