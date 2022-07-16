/*
    Problem:            A. Game of Life
    Problem link:       https://codeforces.com/contest/1523/problem/A
    Contest:            Deltix Round, Spring 2021 (open for everyone, rated, Div. 1 + Div. 2)
    Date:               30/05/2021
    Last Updated:       30/05/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
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
    ll n,m,i;
    cin>>n>>m;
    string a,b;
    cin>>a;
	
	if(n == 2){
		if(a != "00"){
			cout<<"11"<<ee;
			return;
		}
	}
    vll k;
    while(m--){
        b = a;
        k.resize(0);
        loop(i,1,n-1,1){
            if(a[i] == '1'){
                if(a[i-1] == '0'){
                    if(i-2 >= 0 && a[i-2] == '0') k.pb(i-1);
                    else if(i-2 < 0) k.pb(i-1);
                }  
                if(a[i+1] == '0'){
                    if(i+2 < n && a[i+2] == '0') k.pb(i+1);
                    else if(i+2 >= n) k.pb(i+1);
                }
            }
            else{
                if(a[i-1] == '1'){
                    if(a[i+1] == '1') {}
                    else k.pb(i);
                }
                else{
                    if(a[i+1] == '1') k.pb(i);
                }
            }
        }
        for(ll j: k) a[j] = '1';
        if(a == b) break;
    }
    cout<<a<<ee;
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
