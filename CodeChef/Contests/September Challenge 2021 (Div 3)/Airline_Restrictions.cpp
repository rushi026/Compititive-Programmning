/*
    Problem:            Airline Restrictions
    Problem link:       https://www.codechef.com/SEPT21C/problems/AIRLINE
    Contest:            September Challenge 2021 Division 3
    Date:               06/09/2021
    Last Updated:       06/09/2021
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

/**********************************/

ll power(ll x, ll y, ll p = 1e9+7) 
{ 
    ll res = 1;
    x = x ;
    while(y>0) 
    { 
        if(y&1) {
            res = (res*x);
        }
        x = (x*x);
        y = y>>1;
    }
    return res;
}


/***********************************/
void solve()
{
    vll a(3);
    scan(a);
    ll b,c;
    cin>>b>>c;
    _sort(a);
    if(a[2] <= c){
        if(a[0] + a[1] <= b) cout<<"YES"<<ee;
        else cout<<"NO"<<ee;
    }
    else if(a[1] <= c){
        if(a[0] + a[2] <= b) cout<<"YES"<<ee;
        else cout<<"NO"<<ee;
    }
    else if(a[0] <= c){
        if(a[1] + a[2] <= b) cout<<"YES"<<ee;
        else cout<<"NO"<<ee;
    }
    else cout<<"NO"<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
