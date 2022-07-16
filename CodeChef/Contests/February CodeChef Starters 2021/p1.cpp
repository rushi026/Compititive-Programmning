/*
    Problem:            Chef and Coupon
    Problem link:       https://www.codechef.com/START1C/problems/COUPON2
    Contest:            February CodeChef Starters 2021 (Rated for Div 3)
    Date:               28/02/2021
    Last Updated:       28/02/2021
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
    ll a1, b1, c1, a2, b2, c2, c, d;
    ll with_c = 0, without_c = 0;
    cin>>d>>c>>a1>>b1>>c1>>a2>>b2>>c2;
    ll day1 = a1+b1+c1; ll day2 = a2+b2+c2;
    if(day1 >= 150)
    {}
    else
        day1 += d;
    if(day2 >= 150)
    {}
    else
        day2 += d;
    with_c = day1 + day2 + c;
    without_c = a1+b1+c1+a2+b2+c2+d+d;
    if(without_c > with_c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
