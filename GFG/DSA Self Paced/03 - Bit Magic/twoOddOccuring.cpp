/*
    Problem:        Find two numbers in array which are occurring odd number of times.
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
    -> In this promblem first of all we will find XOR of all the values.
    -> We'll get XOR of resulting 2 values from that.
    -> Now we need to find 2 numbers from their XOR.
    -> We will find right most set bit of that XOR number.
    -> Because that bit is set in one of those 2 numbers and isn't set in another one.
    -> To find right most set bit in XOR...  we'll perfom this operation,
        => right most set bit number = (XOR & (XOR-1))
    -> Then we'll distribute all the array elements in 2 parts - 
            1. of which numbers' & is 0
            2. of which number's & is not 0
    -> Our 2 answer numbers will also distributed in these 2 parts.
    -> Then we'll perform XOR operation in these 2 parts and we will get our both numbers.
*/

void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    ll x0r = 0;
    for(auto &i: a){
        cin>>i;
        x0r ^= i;
    }
    ll sn = x0r & (x0r-1), ans1=0, ans2=0;
    for(auto i: a){
        if((i & sn) != 0) ans1 ^= i;
        else ans2 ^= i;
    }
    cout<<ans1<<" "<<ans2<<ee;
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
