/*
    Problem:            xyz
    Problem link:       xyz
    Contest:            xyz
    Date:               dd/mm/yyyy
    Last Updated:       dd/mm/yyyy
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


// -2 -3 -4 -1 -2 1 5 -3 8
// -2 -4 -5 -1 -8 -3 -7 -6


/***********************************/
void solve()
{
    vll a;
    ll temp; 
    while(true)
    {
        if(cin>>temp) a.pb(temp);
        else break;
    }
    ll i, sum=0, n=a.size(), ans = INT_MIN, ans2 = INT_MIN, last_int_index=0;
    bool t = false;
    loop(i,0,n,1)
    {
        a[i]>ans2 ? ans2 = a[i] : ans2 = ans2;
        if(a[i] > 0) last_int_index = i;
        if(a[i] < 0 && !t) continue;
        else
        {
            t = true;
            sum += a[i];
            if(sum>ans)
            {
                ans = sum;
            }
        }
    }
    if(!t) {cout<<ans2<<ee; return;}
    t = false;
    ll minn = INT64_MAX;
    loop(i,0,last_int_index+1,1)
    {
        if(a[i]<0 && !t) continue;
        else
        {
            t = true;
            minn = min(minn, a[i]);
        }
    }
    ans -= (minn);
    cout<<ans<<ee;
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
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
