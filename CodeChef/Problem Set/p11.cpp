/*
    Problem:            ATM
    Problem link:       https://www.codechef.com/problems/HS08TEST
    Contest:            Practice(Beginner)
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
    ll x;
    double y;
    cin>>x>>y;
    if(x>y || (!(x%5==0)))
    {
        cout<<y<<endl;
        return;
    }
    else
    {
        if(x+0.5 > y)
        {
            cout<<y<<endl;
            return;
        }
        else
            cout<<y-x-0.5<<endl;
    }
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
