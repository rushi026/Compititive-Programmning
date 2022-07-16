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
char* removeAdjDup(char* str, int n)
{
    int i, k = 0;
    int len = strlen(str);
    for (i = 1; i < len; i++)
    {
        if (str[i - 1] != str[i])
            str[k++] = str[i - 1];
        else
        {
            while (i < len && str[i - 1] == str[i])
                i++;
        }
    }
     str[k++] = str[i - 1];
     str[k] = '\0';
     if (k != n)
        return removeAdjDup(str, k); 
    return str;
}

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    char cs[n+1];
    strcpy(cs, s.c_str());
    cout<<removeAdjDup(cs,n+1)<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
