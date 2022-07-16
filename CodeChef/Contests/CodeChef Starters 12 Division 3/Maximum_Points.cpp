/*
    Problem:            Maximum Points
    Problem link:       https://www.codechef.com/START12C/problems/MAXPOINT
    Contest:            CodeChef Starters 12 Division 3
    Date:               22/09/2021
    Last Updated:       22/09/2021
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
    ll a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    if(a+b+c <= 12){
        ll ans = 0;
        ans += 20*x;
        ans += 20*y;
        ans += 20*z;
        cout<<ans<<ee;
        return;
    }
    else{
        vector<double> p;
        p[0] = a/x;
        p[1] = b/y;
        p[2] = c/z;
        if(p[0] == p[1] && p[1] == p[2]){


            return;
        }
        if(p[0] < p[1] && p[0] < p[1]){


            return;
        }
        // else if(p[1] < p[0])
    }
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/CodeChef/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/CodeChef/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
