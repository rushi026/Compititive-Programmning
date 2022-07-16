/*
    Problem:            Shuffling Parities
    Problem link:       https://www.codechef.com/SEPT21C/problems/SHUFFLIN
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
    ll n, o=0, e=0, ans=0;
    cin>>n;
    vll a(n);
    for(auto &i: a){
        cin>>i;
        i&1 ? o++ : e++;
    }
    if(!o){
        n&1 ? cout<<n/2+1<<ee : cout<<n/2<<ee;
        return;
    }
    if(!e){
        cout<<n/2<<ee;
        return;
    }

    if(!n&1){
        if(o == e){
            cout<<n<<ee;
            return;
        }
        if(o > e){
            ans += ((e*2) + ((n - e*2)/2));
            cout<<ans<<ee;
            return;
        }
        else{
            ans += o*2 + 1;
            ans += (n - (o*2 + 1))/2;
            cout<<ans<<ee;
            return;
        }
    }
    else{
        if(o+1 == e){
            cout<<n<<ee;
            return;
        }
        if(e > o){
            ans += o*2 + 1;
            ans += (n - (o*2 + 1))/2;
            cout<<ans<<ee;
            return;
        }
        else{
            ans += e*2;
            ans += (n - (e*2))/2;
            cout<<ans<<ee;
            return;
        }
    }
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
