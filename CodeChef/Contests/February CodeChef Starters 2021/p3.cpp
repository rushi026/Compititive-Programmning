/*
    Problem:            Maximum Value
    Problem link:       https://www.codechef.com/START1C/problems/MVALUE
    Contest:            February CodeChef Starters 2021 (Rated for Div 3)
    Date:               28/02/2021
    Last Updated:       29/07/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(i=x; i>=y; i-=z)
#define ee                  '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)  
#define sll                	set<ll>
#define pll               	pair<ll, ll>
#define mll                	map<ll, ll>


/***********************************/

void solve(){
    ll n;
    ll a = 0, ans = 0, b = 0;
    cin>>n;
    vll v(n);
    scan(v);
    _sort(v);
    a = v[0]; b = v[1];
    ans = a*b + max(a-b, b-a);
    a = v[n-1]; b = v[n-2];
    cout<<max(ans, a*b+max(a-b,b-a))<<ee;
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
