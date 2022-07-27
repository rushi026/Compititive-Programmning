/*
    Problem:        GCD of two numbers (HCF)
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
    # Eucliedean Algorithm to find GCD of two numbers
        -> if b<a; GCD(a,b) = GCD(b,a-b)

        -> let's say GCD of a and b is g
        -> therefore, a = g*x; b = g*y;
        -> it's clearly visible that there is no comman factor between x and y
        -> therefore, a - b = g*(x-y);
        -> we can say that GCD(b, a-b) = g beacause there is no comman factor betweeen y and x-y
        -> because if there is comman factor between y and x-y then 'there should be comman factor between x and y' which is false
        -> that's why we can say that GCD(a,b) = GCD(b,a-b)
*/
void solve()
{
    ll a,b;
    cin>>a>>b;
    while(a != b){
        if(a > b) a -= b;
        else b -= a;
    }
    cout<<a<<ee;
}

//-------------------------------------------------------------------------------------

/*
    # Eucliedean Optimized Algorithm to find GCD of two numbers
        -> instead of doing repetition of substraction we can do modular operation 
        -> if b<a; then we can repeatedly find gcd(b, a%b) until b not become 0
        -> first parameter will be replaced by b everytime and second parameter will become a%b
        -> after some iterations second parameter will become 0; that means a%b = 0, it means second param is divisible by first one
*/
ll gcd_optimized(ll a, ll b){
    if(b == 0) return a;
    return gcd_optimized(b, a%b);
}
void solve2()
{
    ll a,b;
    cin>>a>>b;
    cout<<gcd_optimized(a,b)<<ee;
}

/***********************************/
int main()
{   
    // speedy;
    ll t=1;
    // cin>>t;
    while(t--)
        solve2();
    return 0;
}
