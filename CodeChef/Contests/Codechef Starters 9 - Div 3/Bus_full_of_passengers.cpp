/*
    Problem:            Bus full of passengers
    Problem link:       https://www.codechef.com/START9C/problems/BUS
    Contest:            CodeChef Starters 9 Division 3 (Rated)
    Date:               17/08/2021
    Last Updated:       17/08/2021
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
ll n,m,q, cur=0;
bool ans;
void solve()
{ 
    cur = 0;
    ans = true;
    cin>>n>>m>>q;
    vector<int> a(q, -1);
    while(q--){
        char c; ll i;
        cin>>c; cin>>i;
        if(c == '-'){
            if(a[i-1] == 1){
                a[i-1] = 0;
                cur--;
            }
            else if(a[i-1] == -1 || a[i-1] == 0) ans = false;
        }
        if(c == '+'){
            a[i-1] = 1;
            cur++;
            if(cur > m) ans = false;
        }
    }
    if(ans) cout<< "Consistent" <<ee;
    else cout<< "Inconsistent" <<ee;
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
