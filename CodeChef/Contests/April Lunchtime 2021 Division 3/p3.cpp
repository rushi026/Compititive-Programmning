/*
    Problem:            Chef in Heaven 
    Problem link:       https://www.codechef.com/LTIME95C/problems/CCHEAVEN
    Contest:            April Lunchtime 2021 Division 3 
    Date:               30/04/2021
    Last Updated:       30/04/2021
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


/***********************************/
ll l,i, temp,c;
void solve()
{
    c=0;
    cin>>l;
    temp = l;
    string s;
    cin>>s;
    loop(i,0,l,1) if(s[i] == '1') c++;
    rloop(i,l-1,0,1){
        if(s[i] == '0') temp--;
        else break;
    }
    if(c >= (temp-c)) cout<<c<<" "<<temp-c<<"YES"<<ee;
    else cout<<c<<" "<<temp-c<<"NO"<<ee;
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
