/*
    Problem:        Check whether the number is power of 2 or not
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

ll power(ll x, ll n){
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}


/***********************************/


/*
    Naive Method:
        We will divide N by 2 repeatedly. 
        If we get the odd number except for 1, N is not power of 2. 
        And if we get 1, N is power of 2.
*/
bool naiveMethod(ll n){
    if(n == 0) return false;
    while(n != 1){
        if(n&1) return false;
        n >>= 1;
    }
    return true;
}


/*
    Optimized Method:
        We simply perform & between N and N-1;
        if we get 0, that means N is power of 2. otherwise not.
*/
bool optimized(ll n){
    if(n == 0) return false;
    return ((n & (n-1)) == 0);
}

void solve()
{
    ll n;
    cin>>n;

    if(naiveMethod(n)) cout<<"YES"<<ee;
    else cout<<"NO"<<ee;

    if(optimized(n)) cout<<"YES"<<ee;
    else cout<<"NO"<<ee;
}

/***********************************/
int main()
{   
    // speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
