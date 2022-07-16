/*
    Problem:            Chef and Dice
    Problem link:       https://www.codechef.com/APRIL21C/problems/SDICE
    Contest:            April Challenge 2021 Division 3
    Date:               02/04/2021
    Last Updated:       03/04/2021
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
void solve()
{
    ull n,ans=0;
    cin>>n;
    if(n == 1) {cout<<20<<endl; return;}
    if(n == 2) {cout<<36<<endl; return;}
    if(n == 3) {cout<<51<<endl; return;}
    if(n == 4) {cout<<60<<endl; return;}
    int temp = n%4;
    n /= 4;
    ans += n*44;
    if(temp == 1) ans += 32;
    else if(temp == 2) ans += 44;
    else if(temp == 3) ans += 55;
    else ans += 16;
    cout<<ans<<endl;
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
