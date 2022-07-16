/*
    Problem:            Chef & Cakes
    Problem link:       https://www.codechef.com/QFUN2020/problems/CHEFCAKE
    Contest:            QUARANTINE FUN
    Date:               18/07/2020
    Last Updated:       18/07/2020
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
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
ll sum = 0;

void permute(string str, string out)
{
    if (str.size() == 0)
    {
        sum += stoi(out);
        return;
    }
    ll i;
    loop(i,0,str.size(),1)
    for (int i = 0; i < str.size(); i++)
    {
        permute(str.substr(1), out + str[0]);
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

void solve()
{
    ll n;
    cin>>n;
    string s = "";
    ll i, a[n];
    loop(i,0,n,1)
    {
        cin>>a[i];
        s += to_string(a[i]);
    }
    permute(s,"");
    cout<<sum<<endl;
    sum = 0;
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
