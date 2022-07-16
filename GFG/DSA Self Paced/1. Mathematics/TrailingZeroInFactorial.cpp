/*
    Problem:        Trailing Zeros in Factorial
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
    => To find tariling zeros, we need to find number of prime factors 2 and 5;
        -> Because 2 and 5 both together will make tariling zero
    => In prime factorization of factorial of N, 5's are always less than 2's
    => So we just need to find 5's in sequence
        -> 1*2*3*4*5*6*7*8*9*.....*24*25*26*....*124*125*126*....*n
    => Powers of 5 will have more than one 5 factors in it; 
        -> Ex: 25 = 5*5; 125 = 5*5*5
        -> so we need to conunt it too
        
    =>  -> after every 5th number, there is 1 prime factor 5
        -> after every 25th number, there is another prime factor 5 (total 2)
        -> after every 125th number, there is another prime factor 5 (total 3)
        -> .... 
        -> ...
        -> ..
    
*/

void solve()
{
    ll n, i, ans=0;
    cin>>n;
    for(i=5; i<=n; i*=5)
        ans += floor(n/i);
    cout<<ans<<ee;
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
