/*
    Problem:            Goa Carnival
    Problem link:       https://www.codechef.com/PEAS2021/problems/CVL
    Contest:            Peas of Code
    Date:               31/03/2021
    Last Updated:       31/03/2021
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
    ull n,t, sum=0,i, ans=0;
    cin>>n>>t;
    vector<ull> v(n);
    loop(i,0,n,1)
    {
        cin>>v[i];
        sum += v[i];
    }
    ans=0;
    ans += ((int)(t/sum))*n;
    t -= sum*((int)(t/sum));
    loop(i,0,n,1)
    {
        if(v[i] <= t)
        {
            t -= v[i];
            ans++;
        }
    }
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
