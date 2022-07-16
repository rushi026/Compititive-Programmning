/*
    Problem:        Count set bits in binary representation of N
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
    Naive Solution:
        In this method, we check whether the last bit is set or not and accordingly we increment the result.
        And then we remove the last bit. (We can divide the number by 2 everytime and we can also using right shift operator to remove the last bit)
        And then we repete this step until N is not become 0.
    Complexity of this solution: O(total bits)
*/
void solve1()
{
    ll n;
    cin>>n;
    ll c=0;
    while(n){
        if(n&1) c++; // c += (n&1);
        n >>= 1;
    }
    cout<<c<<ee;
}


/*
    Brian Kerningam's Algorithma:
        In this method we perform '&' between N and N-1; Unitl N is not becoming zero.
        And we simply count loop iterations. 
        Logic: If we perfomr '&' between N and N-1; it will replace last set digit with 0.
    Complexity of this solution: O(set bits)
*/
void solve2(){
    ll n;
    cin>>n;
    ll c=0;
    while(n){
        n = (n & (n-1));
        c++;
    }
    cout<<c<<ee;
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
