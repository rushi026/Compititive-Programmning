/*
    Problem:        Check whether a number is prime or not
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

/*
    # Simple method:
        -> we can check from 2 to sqrt(n), if we find a number divisible by N, then N is not prime
        -> if there is no such number between 2 to sqrt(n) that divisible by N, then N is prime
*/
bool simple_prime(ll n){
    if(n == 1) return false;
    for(ll i=2; i*i<=n; i++) if(n%i == 0) return false;
    return true;
}


/*
    # More efficient method:
        -> if we check whether the number is divisible by 2 or 3; we can save many iterations
        -> after that from 5 every prime number comes after adding 6 to that number and next to next of that number
*/
bool more_efficient_prime(ll n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2==0 || n%3==0) return false;

    for(ll i=5; i*i<=n; i+=6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}


void solve()
{
    ll n;
    cin>>n;
    cout<<simple_prime(n)<<ee;
    cout<<more_efficient_prime(n)<<ee;
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
