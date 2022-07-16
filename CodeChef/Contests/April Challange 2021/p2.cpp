/*
    Problem:            World Record
    Problem link:       https://www.codechef.com/APRIL21C/problems/BOLT
    Contest:            April Challenge 2021 Division 3
    Date:               02/04/2021
    Last Updated:       02/04/2021
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
inline float roundK(float n)
{
    float value = (int)(n * 100 + 0.5);
    return (float)value / 100.0;
}

void solve()
{
    float a,b,c,v;
    cin>>a>>b>>c>>v;
    float time = roundK(100.0/(a*b*c*v));
    if(time < (float)9.58) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
