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
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n, k;
    cin>>n>>k;
    vll a(n);
    ll i, m1=0, p1 = 0;
    scan(a);
    bool tooslow = false;
    loop(i,0,n,1)
    {
        if(a[i] == (-1))
            m1++;
        if(a[i] == 0 || a[i] == 1)
            p1++;
        if(a[i] > k)
        {
            tooslow = true;
        }
    }
    if(p1 == n)
    {
        cout<<"Bot"<<endl; return;
    }
    ll ri = n-m1;
    if(ri < (n+1)/2)
    {
        cout<<"Rejected"<<endl; return;
    }
    if(tooslow)
    {
        cout<<"Too Slow"<<endl; return;
    }
    cout<<"Accepted"<<endl;

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
