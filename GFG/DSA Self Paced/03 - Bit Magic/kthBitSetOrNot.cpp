/*
    Problem:        CHeck whether the kth bit in binary representation of number is set or not
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
    Using left shift operator.
    In this method, we left shift 1, k-1 times and perform & with N.
    if we get the result 0 then kth bit in N is not set otherwise it is.
*/
void solve()
{
    ll n, k;
    cin>>n>>k;
    if((n & (1<<(k-1))) != 0) cout<<"YES"<<ee;
    else cout<<"NO"<<ee;
}


/*
    Using right shift operator.
    In this method, we right shift n, k-1 times and perform & with 1.
    if we get the result 1, then it means, kth bit in N is set otherwiese not.
*/
void solve2(){
    ll n,k;
    cin>>n>>k;
    if(((n>>(k-1)) & 1) == 1) cout<<"YES"<<ee;
    else cout<<"NO"<<ee;
}

/***********************************/
int main()
{   
    // speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve2();
    return 0;
}
