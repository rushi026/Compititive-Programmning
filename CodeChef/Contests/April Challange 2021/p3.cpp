/*
    Problem:            Strong Language
    Problem link:       https://www.codechef.com/APRIL21C/problems/SSCRIPT
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
ll n,k;
ll i; bool temp = false; ll c=0;
void solve()
{
    n=0; k=0;
    cin>>n>>k;
    char s[n];
    temp = false; c = 0;
    loop(i,0,n,1)
    {
        cin>>s[i];
        if(s[i] == '*')
        {
            c++;
            if(c == k) temp = true;
        }
        else c = 0;
    }
    if(temp) cout<<"YES"<<endl;
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
