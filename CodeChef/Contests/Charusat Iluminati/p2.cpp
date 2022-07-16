/*
    Problem:            Rectangle In Peace RIP
    Problem link:       https://www.codechef.com/CCRH2020/problems/ICCHCE
    Contest:            Charusat Illuminati
    Date:               02/08/2020
    Last Updated:       02/08/2020
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
void solve()
{
    ll n;
    ll a[n][4];
    ll i,j, kx=0, ky=0;
    ll x_axNeSamantar[n];
    ll y_axNeSamantar[n];
    loop(i,0,n,1)
    {
        loop(j,0,4,1)
        {
            cin>>a[i][j];
        }
        if(a[i][1] == a[i][3])
            x_axNeSamantar[kx++] = i;
        if(a[i][0] == a[i][2])
            y_axNeSamantar[ky++] = i;
    }
    loop()
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

