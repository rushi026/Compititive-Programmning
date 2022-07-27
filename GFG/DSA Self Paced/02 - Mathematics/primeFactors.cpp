/*
    Problem:        Prime Factors
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
    # Naive Solution:
        -> This solution simply run a loop from 2 to sqrt(n) and check whether i is divisible by N or not
        -> if it does, then we print i and divide N with i, and repeat that step
        -> because power of prime number might be factor of N.
        -> then we will increament i and will follow the same steps
        -> our N will become smaller everytime and at the last one single prime number will remain which will be printed finally
*/
void naiveSolution(ll n){
    if(n < 2) return;
    ll i;
    for(i=2; i*i<=n; i++){
        while(n % i == 0){
            cout<<i<<" ";
            n /= i;
        }
    }
    if(n > 1) cout<<n;
    cout<<ee;
}


/*
    # Optimized Solution:
        -> if is handle prime factor 2 and 3 explicitly, then we can save many iterations
        -> we will do the same steps but will do for 2 and 3 separately and then will start form 5 and will be adding 6 everytime and check for those numbers and next to next of those numbers
*/
void optimizedSolution(ll n){
    if(n < 2) return;
    while(n % 2 == 0){
        cout<<2<<" ";
        n /= 2;
    }
    while(n % 3 == 0){
        cout<<3<<" ";
        n /= 3;
    }
    for(ll i=5; i*i<=n; i+=6){
        while(n % i == 0){
            cout<<i<<" ";
            n /= i;
        }
        while(n % (i+2) == 0){
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    if(n > 3) cout<<n;  
    cout<<ee;
}

void solve()
{
    ll n; 
    cin>>n;
    naiveSolution(n);
    optimizedSolution(n);
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
