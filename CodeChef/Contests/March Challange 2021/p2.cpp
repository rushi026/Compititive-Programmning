/*
    Problem:            Chef and Groups
    Problem link:       https://www.codechef.com/MARCH21C/problems/GROUPS
    Contest:            March Challenge 2021 Division 3
    Date:               10/03/2021
    Last Updated:       10/03/2021
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


/***********************************/
string s;
ll n,i,c;
void solve()
{
    c=0;
    cin>>s;
    n = s.length();
    loop(i,1,n,1){
        if(s[i-1] == '1' && s[i] == '0')
            c++;
    }
    if(s[n-1] == '1')
        c++;
    cout<<c<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
