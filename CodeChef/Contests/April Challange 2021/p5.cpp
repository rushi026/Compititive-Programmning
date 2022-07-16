/*
    Problem:            Worthy Matrix
    Problem link:       https://www.codechef.com/APRIL21C/problems/KAVGMAT
    Contest:            April Challenge 2021 Division 3
    Date:               05/04/2021
    Last Updated:       05/04/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)                


/***********************************/
ll n,m,k;
ll i,j, ans;
void solve()
{
    n = 0; m = 0; k = 0; i = 0; j = 0; ans = 0;
    cin>>n>>m>>k;
    ll a[n][m];
    loop(i,0,n,1)
    {
        loop(j,0,m,1)
        {
            cin>>a[i][j];
            if(a[i][j] >= k) ans++;
        }
    }
    
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/CodeChef/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/CodeChef/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
