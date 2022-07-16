/*
    Problem:            College Life 2
    Problem link:       https://www.codechef.com/START1C/problems/COLGLF2
    Contest:            February CodeChef Starters 2021 (Rated for Div 3)
    Date:               28/02/2021
    Last Updated:       28/02/2021
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
long int s;
long int i, sum_of_intro = 0, ans = 0;

void solve()
{
    i = 0; sum_of_intro = 0; ans = 0;
    cin>>s;
    long int e[s];
    loop(i,0,s,1)
    {
        cin>>e[i];
        sum_of_intro += e[i];
    }
    loop(i,0,s,1)
    {
        long int num_of_episodes;
        cin>>num_of_episodes;
        long int j, total_minutes_current_season = 0;
        long int len_of_episodes[num_of_episodes];
        loop(j,0,num_of_episodes,1)
        {
            cin>>len_of_episodes[j];
            total_minutes_current_season += len_of_episodes[j];
            total_minutes_current_season -= e[i];
        }
        ans += total_minutes_current_season;
    }
    ans += sum_of_intro;
    cout<<ans<<endl;
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
